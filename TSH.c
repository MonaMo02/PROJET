#include "TSH.h"
#include<stdio.h>
#include<stdlib.h>
/*****************************Initialisation de la table des symboles************************************/
void init () {
	int i;
	for(i=0; i<2000; i++){
		TS[i]=NULL;
	}
}

/***********************************Fonction de hachagee************************************************/
int hachage(char chaine [])
{
    int i, res = 0;

    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        res += chaine[i];
    }
    res = res * 8744 - 23;
    res %= 100;

    return res;
}

/***********************************Extraction d'une chaine************************************************/
char * substring(char string[]){
    char subbuff[255];
    memcpy( subbuff, &string[1],strlen(string)-1);
    subbuff[strlen(string)-2]='\0';
    return strdup(subbuff);
}

/***********************************Fonction de recherche************************************************/
int recherche(char nom[], element ** in){
	element * p;
	int i = hachage(nom);
	if(TS[i]==NULL) {
		*in = NULL;
		return i;
	}
	if(TS[i]!=NULL){
		p = TS[i];
		do {
			if (strcmp(p->nom, nom)==0){
				*in = p;
				return -1;
			}
			p=p->suiv;
		} while(p!=NULL);
	}
			*in = NULL;
			return i;
}

/***********************************Fonction qui reccupere le type***************************************/
int gettype(char nom[]){
	element *p;
	int i = recherche(nom,&p);
	if(p!=NULL){return p->code;}
}

char* gettype2(char nom[]){
	element *p;
	int i = recherche(nom,&p);
	if(p!=NULL){return p->type;}
}

int gettaille(char nom[]){
	element *p;
	int i = recherche(nom,&p);
	if(p!=NULL){return atoi(p->taille);}
}
char* gettaillechar(char nom[]){
	element *p;
	int i = recherche(nom,&p);
	if(p!=NULL){return p->taille;}
}



/**********************Fonction de verification de la declaration d'un idf******************************/
int declared(char nom[]){
	element *p;
	int i = recherche(nom, &p);
	if(i==-1) return 1;
	else return 0;
}
/***********************************Fonction qui retourne le max****************************************/
int max(int a, int b){
	if(a>b) return a;
	return b;
}

/***********************************Fonction d'insertion***********************************************/
void insere(char nom[], char type[], char taille[]){
	element *p, *q;
	int i = recherche(nom, &q);
	if (i!=1){
		p = malloc(sizeof(element));
		strcpy(p->nom,nom);
		strcpy(p->type,type);
		//p->code = code;
		strcpy(p->taille,taille);
		if(strcmp(type,"FLOAT")==0 ||strcmp(type,"CONST_FLOAT")==0){
			float num=atof(taille);
			p->code2 = num;
		}else{
			float num=atoi(taille);
			p->code = num;
		}
		p->used=0;
		p->suiv = TS[i];
		TS[i] = p;
	}
}

/**************************************Fonction d'affichage***********************************************/
void affiche(){
	element *p;
printf("\n********************************************\n");
printf("*            Table des symboles            *\n");
printf("********************************************\n");
printf("_________________________________________________________________\n");
printf("| NomEntite 	       |CodeEntite	   |Information           |\n");
printf("|______________________|___________________|______________________|\n");

int i=0;
  while(i<2000)
  {
  	p=TS[i];
  	if(p!= NULL){
  		do {
  			 printf("|%21s |%18s | %21s|\n",p->nom,p->type, p->taille);
  			 p=p->suiv;
  		} while(p!=NULL);
  	}
   i++;
   }
printf("|______________________|___________________|______________________|\n");
}
int ifused(char nom[]){
	element *p;
	int i = recherche(nom,&p);
	if(p!=NULL){return p->used;}
}
/********************************************Fonctions d'optimisation***************************************/

/******************************Variable declaree non utilisee*********************************************/
void used(char nom[]){
	int i;
	element *q;
	i = recherche(nom,&q);
	if(q!=NULL){
		q->used=1;
	}
}

void delete_unused(){
	element * p, *prec;
	int i;
for(i=0;i<2000;i++){
	if(TS[i]!=NULL){
		p = TS[i];
		do{
			if(p->used==0){
				if(p==TS[i]){
					TS[i]=p->suiv;
				}
				else{
					prec->suiv=p->suiv;
				}
				free(p);
			}
			prec = p;
			p=p->suiv;
		} while(p!=NULL);
	}
	}
}


/*Fonction modifier*/
/*
void mofidier( char* nom, int code){
element *p;
int i=recherche( nom ,&p );
if(p!=NULL){p->code=code;}
}
*/

