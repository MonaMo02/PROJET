#include "TSH.c"
#include <stdio.h>
#include <string.h>

typedef struct quads quads;
struct quads
{
	char *opr;
	char *op1;
	char *op2;
	char *res;
};

struct quads liste[2000];
int qc = 0;
int changement = 1;


/***********************************Generation de quadruplets************************************************/
void GenQuad(char *a, char *b, char *c, char *d)
{
	liste[qc].opr = strdup(a);
	liste[qc].op1 = strdup(b);
	liste[qc].op2 = strdup(c);
	liste[qc].res = strdup(d);
	qc++;
}

/**********************************conversion d'un int en chaine de caractere******************************/
char *convert(int i)
{
	char s[15];
	sprintf(s, "%d", i);
	return strdup(s);
}
/***********************************Quads Expression logiques************************************************/


void LogicQuad(int i, char *b, char *c, char *d)
{
	switch (i)
	{
	case 1:// negation
		GenQuad("BNZ", convert(qc + 3), b, "");
		GenQuad("=", "", "1", d);// not b =true
		GenQuad("BR", convert(qc + 2), "", "");
		GenQuad("=", "", "0", d);//false
		break;
	case 2:// ou :||
		GenQuad("BNZ", convert(qc + 4), b, ""); // si b vrai on branche 
		GenQuad("BNZ", convert(qc + 3), c, "");// si non si c vrai on brance 
		GenQuad("=", "", "0", d);// si non l'expression est fausse
		GenQuad("BR", convert(qc + 2), "", "");
		GenQuad("=", "", "1", d);
		break;
	case 3:// et  : &&
		GenQuad("BZ", convert(qc + 4), b, "");// if b false on sorte
		GenQuad("BZ", convert(qc + 3), c, "");//si non if c false on sorte
		GenQuad("=", "", "1", d);// si non lexprition est vrai
		GenQuad("BR", convert(qc + 2), "", "");
		GenQuad("=", "", "0", d);
		break;
	}
}

/***********************************Quads Expressions de comparaison************************************************/
void ComparQuad(int i, char *b, char *c, char *d)
{ char *TypeBR;
	switch (i)
	{	case 1 :{// ">=" supp ou egale
			TypeBR=strdup("BGE");
		}
		break;
		case 2 :{// ">" supp
			TypeBR=strdup("BG");
		}
		break;
		case 3 :{// ">=" inf ou egale
			TypeBR=strdup("BLE");
		}
		break;
		case 4 :{// ">" inf
			TypeBR=strdup("BL");
		}
		break;
		case 5 :{// "!=" (different)
			TypeBR=strdup("BNE");
		}
		break;
		case 6 :{// "==" (égale)
			TypeBR=strdup("BE");
		}
		break;	
	}
	GenQuad(TypeBR,convert(qc+3),b,c);
	GenQuad("=","1","",d);
	GenQuad("BR",convert(qc+2),"","");
	GenQuad("=","0","",d);
}

/********************************************Suppression des quads des affectations non utilisees**************************************/
void delete_quad()
{
	int i, j, k, t, p;
	char *temp;
	for (i = 0; i < qc; i++)
	{
		if (strcmp(liste[i].opr, "=") == 0)
		{
			j = i + 1;
			temp = strdup(liste[i].res);
			k = 0;
			while ((j < qc) && (k == 0))
			{
				if ((strcmp(liste[j].op1, temp) == 0) || 
				(strcmp(liste[j].op2, temp) == 0) || 
				((strcmp(liste[j].opr, "BR") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BZ") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BNZ") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BG") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BGE") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BL") == 0) && (atoi(liste[j].op1) < i)) || 
				((strcmp(liste[j].opr, "BLE") == 0) && (atoi(liste[j].op1) < i)))
				{
					k = 1;
				}
				j++;
			}
			if (k == 0)
			{
				t = 0;
				p = i;
				while ((p > 0) && (t == 0))
				{
					if ((strcmp(liste[p - 1].opr, "+") == 0) ||
					 (strcmp(liste[p - 1].opr, "-") == 0) || 
					 (strcmp(liste[p - 1].opr, "*") == 0) || 
					 (strcmp(liste[p - 1].opr, "/") == 0))
					{
						p--;
					}
					else
					{
						t = 1;
					}
				}
				for (j = p; j < qc - 1; j++)
				{
					liste[j] = liste[j + (i - p) + 1];
				}
				qc = qc - (i - p) - 1;
			}
		}
	}
}

/********************************************/ 

void PropagationDeCopie() {
    int i, j, k;
	int nbQc=0; // calculer le nb des quads jusqu a trouver le meme res (changer la valeur du var)
	int trouve;
	int nbOcc=0; // res doit etre presant dasn au mois deux quad comme operand
    for (i = 0; i < qc-1; i++) 
	{    
		if (strcmp(liste[i].opr, "=") == 0 )
		{      
				nbQc=i+1; trouve =0;
				for (j = i+1; j < qc; j++)
				{
					if (strcmp(liste[i].res, liste[j].res) != 0 )
					{
					    nbQc++; trouve=1; //trouve est utilise pour la condition if 
						if (strcmp(liste[i].op1,liste[j].op2) == 0 || strcmp(liste[i].op1,liste[j].op1) == 0)
						{
							nbOcc++;
						}
					}
					else
					{
						break;
					}
				}
				if(trouve == 1 && nbOcc>1){
					for (j = i + 1; j < nbQc; j++) 
					{    
						if ( (strcmp(liste[i].op1,liste[j].op2) == 0 || strcmp(liste[i].op1,liste[j].op1) == 0) && strcmp(liste[i].op2,"") == 0 )
						{     changement = 1;
					        if (strcmp(liste[i].op1, liste[j].op1) == 0) 
							 {
								 strcpy(liste[j].op1, liste[i].res);
							 } 
							 else 
							 {
								  strcpy(liste[j].op2, liste[i].res);
							 }
						}
					}
				}
		}
       
    }
}
/*********************************************************************************************************/



/********************/



void checkX2()
{
    int i=0;
    for (i=0;i<qc;i++)
    {
        if(strcmp(liste[i].opr,"*") == 0)
        {
            if(strcmp(liste[i].op1,"2") == 0)
            {
                liste[i].opr=strdup("+");
                liste[i].op1=strdup(liste[i].op2);
                liste[i].op2=strdup(liste[i].op2);
            }
            else if (strcmp(liste[i].op2,"2")==0)
            {
                liste[i].opr=strdup("+");
                liste[i].op1=strdup(liste[i].op1);
                liste[i].op2=strdup(liste[i].op1);
            }
        }
    }
}



/***********************************Generation de code machine************************************************/
void assembler()
{
	FILE *file;
	file = fopen("mon_programme.asm", "w");
	if (file == NULL)
	{
		printf("Impossible d'ouvrir le fichier.\n");
	}

	int i, type;
	element *p;
	fprintf(file, "********************DJERAOUI MOUNA SAD YASMINA ZOUAUOI DOUAA********************  \n");
	fprintf(file, "TITLE: mon_programme.asm \n");
	fprintf(file, "DATA SEGMENT \n");
	for (i = 0; i < 2000; i++)
	{
		p = TS[i];
		if (p != NULL)
		{
			do
			{
				if (strcmp(gettype2(p->nom), "INTEGER") == 0)
				{
					fprintf(file, "%s DD ?\n", p->nom);
				}
				if (strcmp(gettype2(p->nom), "FLOAT") == 0)
				{
					fprintf(file, "%s DW ?\n", p->nom);
				}
				if (strcmp(gettype2(p->nom), "Tableau_INTEGER") == 0)
				{
					fprintf(file, "%s DD %s DUP ?\n", p->nom, p->taille);
				}
				if (strcmp(gettype2(p->nom), "Tableau_FLOAT") == 0)
				{
					fprintf(file, "%s DW %s DUP ?\n", p->nom, p->taille);
				}
				if (strcmp(gettype2(p->nom), "CONST_INTEGER") == 0)
				{
					fprintf(file, "%s DD '%s' \n", p->nom, p->taille);
				}
				if (strcmp(gettype2(p->nom), "CONST_FLOAT") == 0)
				{
					fprintf(file, "%s DW '%s' \n", p->nom, p->taille);
				}

				p = p->suiv;
			} while (p != NULL);
		}
	}
	fprintf(file, "DATA ENDS\n");
	fprintf(file, "CODE SEGEMENT\n");
	fprintf(file, "ASSUME CS:CODE, DS:DATA\n");
	fprintf(file, "MAIN :\n");
	fprintf(file, "MOV AX,DATA\n");
	fprintf(file, "MOV DS,AX\n");
	for (i = 0; i < qc; i++)
	{
		fprintf(file, "etiquette %d : ", i);
		if (strcmp(liste[i].opr, "+") == 0)
		{
			if ((liste[i].op1[0] == 'T') && (liste[i].op2[0] == 'T'))
			{
				fprintf(file, "ADD AX, BX\n");
			}
			else
			{
				if (liste[i].op1[0] == 'T')
				{
					fprintf(file, "ADD AX, %s\n", liste[i].op2);
				}
				if (liste[i].op2[0] == 'T')
				{
					fprintf(file, "ADD AX, %s\n", liste[i].op1);
				}
				else
				{
					fprintf(file, "MOV AX, %s\n", liste[i].op1);
					fprintf(file, "ADD AX, %s\n", liste[i].op2);
				}
			}
		}
		if (strcmp(liste[i].opr, "-") == 0)
		{
			if ((liste[i].op1[0] == 'T') && (liste[i].op2[0] == 'T'))
			{
				fprintf(file, "SUB AX, BX\n");
			}

			else
			{
				if (liste[i].op1[0] == 'T')
				{
					fprintf(file, "SUB AX, %s\n", liste[i].op2);
				}
				if (liste[i].op2[0] == 'T')
				{
					fprintf(file, "SUB AX, %s\n", liste[i].op1);
				}
				else
				{
					fprintf(file, "MOV AX, %s\n", liste[i].op1);
					fprintf(file, "SUB AX, %s\n", liste[i].op2);
				}
			}
		}
		if (strcmp(liste[i].opr, "*") == 0)
		{
			if ((liste[i].op1[0] == 'T') && (liste[i].op2[0] == 'T'))
			{
				fprintf(file, "MUL AX, BX\n");
			}
			else
			{
				if (liste[i].op1[0] == 'T')
				{
					fprintf(file, "MUL AX, %s\n", liste[i].op2);
				}
				if (liste[i].op2[0] == 'T')
				{
					fprintf(file, "MUL AX, %s\n", liste[i].op1);
				}
				else
				{
					fprintf(file, "MOV AX, %s\n", liste[i].op1);
					fprintf(file, "MUL AX, %s\n", liste[i].op2);
				}
			}
		}
		if (strcmp(liste[i].opr, "/") == 0)
		{
			if ((liste[i].op1[0] == 'T') && (liste[i].op2[0] == 'T'))
			{
				fprintf(file, "DIV AX, BX\n");
			}
			else
			{
				if (liste[i].op1[0] == 'T')
				{
					fprintf(file, "DIV AX, %s\n", liste[i].op2);
				}
				if (liste[i].op2[0] == 'T')
				{
					fprintf(file, "DIV AX, %s\n", liste[i].op1);
				}
				else
				{
					fprintf(file, "MOV AX, %s\n", liste[i].op1);
					fprintf(file, "DIV AX, %s\n", liste[i].op2);
				}
			}
		}
		if (strcmp(liste[i].opr, "BR") == 0)
		{
			fprintf(file, "JMP etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BG") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JG etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BGE") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JGE etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BL") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JL etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BLE") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JLE etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BZ") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JE etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "BNZ") == 0)
		{
			fprintf(file, "CMP AX, 0\n");
			fprintf(file, "JNE etiquette %s\n", liste[i].op1);
		}
		if (strcmp(liste[i].opr, "=") == 0)
		{
			if (liste[i].res[0] = 'T')
			{
				fprintf(file, "MOV DX, %s\n", liste[i].op2);
			}
			else
				fprintf(file, "MOV %s, AX\n", liste[i].res);
		}
	}
	fprintf(file, "FIN :\n");
	fprintf(file, "MOV AH,4CH\n");
	fprintf(file, "INT 21h\n");
	fprintf(file, "CODE ENDS\n");
	fprintf(file, "END MAIN\n");

	fclose(file);
}



/***********************************Fonction d'affichage des quadruplets************************************************/
void afficher_Quad()
{
	printf("\n*********************Quadruplets***********************\n");

	int i;

	for (i = 0; i < qc; i++)
	{

		printf("\n %d - ( %s  ,  %s  ,  %s  ,  %s )", i, liste[i].opr, liste[i].op1, liste[i].op2, liste[i].res);
		printf("\n---------------------------------------------------\n");
	}
}



/*****************************************/
