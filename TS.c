#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct
{ 
   int state; 
   char name[20];
   char type[20];
} elt;

elt tabs[40],tabm[40];
extern char sav[20];

/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/



void initialisation()
{
  int i;
  for(i=0;i<40;i++)
    {
    tabs[i].state=0;
    tabm[i].state=0;
    }

}


/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

void inserer (char entite[], char code[],int i, int y)
{
  switch (y)
 { 
   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],int y)	
{

int j,i;

switch(y) 
  {

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
        if(i<40)
          inserer(entite,code,i,1);
        else
          printf("entité existe déjà\n");
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
        if(i<40)
         inserer(entite,code,i,2);
        else
   	       printf("entité existe déjà\n");
        break;

}
}


/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher()
{
    int i;


 
printf("\n/***************Table des symboles mots cles*************/\n");

printf("__________________________________________\n");
printf("|    NomEntite    |     CodeEntite        | \n");
printf("__________________________________________\n");
  
for(i=0;i<40;i++)
    if(tabm[i].state==1)
      { 
        printf("|%15s  |%20s   | \n",tabm[i].name, tabm[i].type);               
      }

printf("\n/***************Table des symboles separateurs*************/\n");

printf("__________________________________________\n");
printf("|    NomEntite    |     CodeEntite        | \n");
printf("__________________________________________\n");
  
for(i=0;i<40;i++)
    if(tabs[i].state==1)
      { 
        printf("|%15s  |%20s   | \n",tabs[i].name,tabs[i].type );
        
      }

}



