#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//les type : 1 


struct NT
{
	char * val;
	int type;
};

typedef struct element element;
struct element
{
	char nom[30];
	int code;
	float code2;
	char type[30];
	char taille[255];
	int used;
	struct element *suiv;
};

element *TS[2000];

void init();
int hachage(char chaine[]);
int recherche(char nom [], element ** in);
void insere(char nom[], char type[], char taille[]);
int gettype(char nom[]);
char* gettype2(char nom[]);
int gettaille(char nom[]);
char* substring(char string[]);
void affiche();
void used(char nom[]);
void delete_unused();
char* gettaillechar(char nom[]);
