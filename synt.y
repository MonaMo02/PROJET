%{
#include "quad.c"
#include <stdio.h>
extern FILE* yyin; 
extern int nb_ligne;
extern int nbcol;
char sauvType[] = "";

char sauvPointeur[] = "";
int ntemp=0;
int qcT=0;
int qct2=0;
int t;
char *ent="";
char *entt="";
int win=0;
%}

%union
{
char * chaine;
struct N
{
	char * val;
	char * type;
    char * ch;
}element;
}

%type<element>exp

%type<element>expC
%type<element>cond


%token <chaine>mc_VAR <chaine>mc_instruction <chaine>mc_WRTIE <chaine>mc_READ <chaine>mc_declaration <chaine>VEC <chaine>mc_integer <chaine>mc_float <chaine>mc_const <chaine>mc_if <chaine>mc_else <chaine>mc_for <chaine>mc_while 
%token  acO acF pvg vrg paO paF croF croO deuxpoints point affecter
%token <chaine>idf err STRING_LITERAL
%token <chaine>INTEGER <chaine>FLOAT <chaine>integer_naturel <chaine>float_s num_float num_integer

%left paO paF
%left OU
%left ET
%left negation
%left inf infegale sup supegale egale different
%left ADD SUB
%left MUL DIV


%start S
%%

S: mc_VAR acO DEC acF mc_declaration acO DEC acF mc_instruction acO CORPS acF  
 {printf("programme syntaxiquement correct\n\n");YYACCEPT;}
 ;

DEC: DEC TYPE LISTEIDF pvg
    |DEC LISTECONST pvg
    |DEC TYPE LISTETAB pvg
    |TYPE LISTEIDF pvg
    |LISTECONST pvg
    |TYPE LISTETAB pvg
    
 ;

LISTECONST: mc_const idf affecter num_integer {if(declared($2)==1){yyerror("Double declaration");}else {char *result = substring($4);
 insere($2,"CONST_INTEGER",result);}}
    |mc_const idf affecter integer_naturel {if(declared($2)==1){yyerror("Double declaration");}else {insere($2,"CONST_INTEGER",$4);}}
    |mc_const idf affecter num_float {if(declared($2)==1){yyerror("Double declaration");}else {insere($2,"CONST_FLOAT",$4);}}
    |mc_const idf affecter float_s {if(declared($2)==1){yyerror("Double declaration");}else {char *result = substring($4);
    insere($2,"CONST_FLOAT",result);}}
 ;

LISTETAB: idf croO integer_naturel croF vrg LISTETAB {if(declared($1)==1){yyerror("Double declaration");}
        else {char var[]="Tableau_"; insere($1, strcat(var,sauvType), $3); int taille = atoi($3);
		int j;
        for(j=0; j<taille; j++){
        	char c[50];
        	sprintf(c, "%s[%d]", $1, j); 
           // printf("%s\n", c);
			insere(c,sauvType,"0");
		}}}
    |idf croO integer_naturel croF {if(declared($1)==1){yyerror("Double declaration");}else {char var[]="Tableau_"; insere($1, strcat(var,sauvType), $3); int taille = atoi($3);
		int j;
        for(j=0; j<taille; j++){
        	char c[50];
        	sprintf(c, "%s[%d]", $1, j); 
          //  printf("%s\n", c);
			insere(c,sauvType,"0");
		}}}
 ;

LISTEIDF: idf vrg LISTEIDF {if(declared($1)==1){yyerror("Double declaration");}else{insere($1, sauvType,"0");}}
    |idf {if(declared($1)==1){yyerror("Double declaration");}else{insere($1, sauvType,"0");}}
 ;

TYPE: mc_integer {strcpy(sauvType, "INTEGER");}
    |  mc_float {strcpy(sauvType, "FLOAT");}
 ;



CORPS: INSTS CORPS
    |
;


INSTS:instAFF 
    |instIF
    |instWHILE
    |instFOR
    |io_statement
;

io_statement : mc_READ paO VARIABLE paF pvg
             | mc_WRTIE paO message paF pvg
             ; 

VARIABLE: idf {if(declared($1)==0){yyerror("Erreur semantique: variable non declaree");}}
        | idf croO integer_naturel croF  {if(declared($1) == 0 ) {yyerror("Variable non declaree");}
                                        else{
                                            if($3 > TS[hachage($1)]->taille ){
                                                yyerror("Index out of bound");
                                            }}}
                                          
;

message : writemessage | VARIABLE
;


writemessage : STRING_LITERAL A 

A : vrg VARIABLE B 
    |
;

B : vrg writemessage
    |
;

instAFF: idf affecter exp pvg  {if(declared($1)==0){yyerror("Erreur semantique: variable non declaree");}else{if(strcmp(gettype2($1),"CONST_INTEGER")==0 || strcmp(gettype2($1),"CONST_FLOAT")==0 ){yyerror("Erreur semantique: modification d'une constante !!!!");}
else {
if(strcmp(gettype2($1),"INTEGER")==0 && (strcmp($3.type,"FLOAT")==0) ||strcmp($3.type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
else{used($1);  generer("=",$3.ch,"",$1);}}}}
    |idf point idf affecter exp pvg {char* tab=strcat($1,"."); strcat(tab,$3); if(declared(tab)==0){yyerror("Erreur semantique: variable non declaree");}
    else{if(strcmp(gettype2(tab),"INTEGER")==0 && strcmp($5.type,"FLOAT")==0 || strcmp($5.type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
    else{used(tab); generer("=",$5.ch,"",tab);}}}
    |idf {if(declared($1)==0){yyerror("Erreur semantique: variable non declaree");}
    else{if(strcmp(gettype2($1),"Tableau_INTEGER")!=0 &&strcmp(gettype2($1),"Tableau_FLOAT")!=0){yyerror("Erreur semantique: variable n'est pas de type tableau");}}t=gettaille($1);} croO choix {entt=ent;} croF affecter exp pvg {char* tab=strcat($1,"[");
     strcat(tab,entt); strcat(tab,"]"); used(tab); if(strcmp(gettype2(tab),"INTEGER")==0 && (strcmp($8.type,"FLOAT")==0) ||strcmp($8.type,"CONST_FLOAT")==0){yyerror("Incompatibilite de type");}
      generer("=",$8.ch,"",tab);}
;

choix: idf {if(declared($1)==0 || strcmp(gettype2($1),"INTEGER")!=0){yyerror("l'indice du tableau doit etre INTEGER");}else{if(gettaille($1)>=t){yyerror("Erreur semantique: taille du tableau depasse");}} ent=gettaillechar($1);}
    |integer_naturel {if(atoi($1)>=t){yyerror("Erreur semantique: taille du tableau depasse");} ent=$1;}
;

exp: exp ADD exp {if(strcmp($1.type,"INTEGER")==0 && strcmp($3.type,"INTEGER")==0){
                    $$.type="INTEGER";}
                else{$$.type="FLOAT";}
                float res=strtof($1.val,NULL)+strtof($3.val,NULL); 
                char v[10]=""; 
                sprintf(v, "%f", res); 
                $$.val=v; 
                char c[10]=""; 
                sprintf(c, "T%d", ntemp);
                $$.ch=c;
                generer("+",$1.ch,$3.ch,$$.ch);
                ntemp++;}
    |exp SUB exp {if(strcmp($1.type,"INTEGER")==0 && strcmp($3.type,"INTEGER")==0){
                    $$.type="INTEGER";}
                    else{$$.type="FLOAT";}
                    float res=strtof($1.val,NULL)-strtof($3.val,NULL); 
                    char v[10]=""; 
                    sprintf(v, "%f", res);
                    $$.val=v; 
                    char c[10]=""; 
                    sprintf(c, "T%d", ntemp);
                    $$.ch=c; 
                    generer("-",$1.ch,$3.ch,c);
                    ntemp++;} 
    |exp DIV exp {if(strcmp($1.type,"INTEGER")==0 && strcmp($3.type,"INTEGER")==0){
                    $$.type="INTEGER";}
                    else{$$.type="FLOAT";} 
                    if(strtof($3.val,NULL)==0){
                        yyerror("Erreur semantique: Division par 0!!!!");}
                        float res=strtof($1.val,NULL)/strtof($3.val,NULL); 
                        char v[10]=""; 
                        sprintf(v, "%f", res); 
                        $$.val=v;  
                        char c[10]=""; 
                        sprintf(c, "T%d", ntemp); 
                        $$.ch=c; 
                        generer("/",$1.ch,$3.ch,c);ntemp++;} 
    |exp MUL exp {if(strcmp($1.type,"INTEGER")==0 && strcmp($3.type,"INTEGER")==0){
                    $$.type="INTEGER";}
                    else{$$.type="FLOAT";}
                    float res=strtof($1.val,NULL)*strtof($3.val,NULL); 
                    char v[10]=""; 
                    sprintf(v, "%f", res); 
                    $$.val=v; 
                    char c[10]=""; 
                    sprintf(c, "T%d", ntemp); 
                    $$.ch=c; 
                    generer("*",$1.ch,$3.ch,c);ntemp++;} 
	|idf  {if(declared($1)==0){
            yyerror("Erreur semantique: variable non declaree");} 
            else{used($1);
            $$.type=gettype2($1); 
            $$.val=gettaillechar($1); 
            $$.ch=$1;} }
    |idf point idf {char* tab=strcat($1,"."); 
                    strcat(tab,$3); 
                    if(declared(tab)==0){
                        yyerror("Erreur semantique: variable non declaree");}
                        else{used(tab);
                        $$.type=gettype2(tab);
                        $$.val=gettaillechar(tab); 
                        $$.ch=tab;}}
    |idf croO choix croF{char* tab=strcat($1,"["); 
                        strcat(tab,ent); 
                        strcat(tab,"]"); 
                        $$.type=gettype2(tab); 
                        $$.val=gettaillechar(tab); 
                        $$.ch=tab;}
    |integer_naturel {$$.type="INTEGER"; $$.val=$1; $$.ch=$1} 
    |num_float {$$.type="FLOAT"; $$.val=$1; $$.ch=$1}
	|num_integer {$$.type="INTEGER"; $$.val=strtok($1,"()"); $$.ch=strtok($1,"()")}
    |float_s {$$.type="FLOAT"; $$.val=strtok($1,"()"); $$.ch=strtok($1,"()")}
    |paO exp paF {$$.type=$2.type; $$.val=$2.val; $$.ch=$2.ch;}
    
;

 

instIF: mc_if paO cond paF  acO  CORPS  acF 
                            {if(win==1){liste[qcT].op1=convert(qc+1);
                                        liste[qcT-2].op1=convert(qc+1); 
                                        win=0;}
                                else{liste[qcT].op1=convert(qc+1);} 
                                qcT=qc;
                                generer("BR","","",""); } 
                mc_else acO CORPS acF{ liste[qcT].op1=convert(qc); } 
    
;

cond: cond ET cond {win=1; $1.ch=strdup($$.ch);}
    |cond OU cond  {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quadL(3,$1.ch,$3.ch,$$.ch);ntemp++;}
    |negation cond {sprintf($$.ch,"T%d",ntemp);quadL(1,$2.ch,"",$$.ch);ntemp++;}
    |expC
;

expC: expC inf expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(1,$1.ch,$3.ch,$$.ch);qcT=qc-1;ntemp++;}
    |expC infegale expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(2,$1.ch,$3.ch,$$.ch);qcT=qc-1;ntemp++;}
    |expC sup expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(3,$1.ch,$3.ch,$$.ch);qcT=qc-1;ntemp++;}
    |expC supegale expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(4,$1.ch,$3.ch,$$.ch);qcT=qc-1;ntemp++;}
    |expC egale expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(5,$1.ch,$3.ch,$$.ch);qcT=qc-1; ntemp++;}
    |expC different expC {$1.ch=strdup($$.ch);sprintf($$.ch,"T%d",ntemp);quad(6,$1.ch,$3.ch,$$.ch);qcT=qc-1;ntemp++;}
    |exp 
;

instWHILE: mc_while {qct2=qc;} paO cond paF acO  CORPS {liste[qcT].op1=convert(qc+1); generer("BR",convert(qct2),"","");} acF
;

instFOR: mc_for paO idf deuxpoints integer_naturel deuxpoints integer_naturel deuxpoints {qcT=qc;} cond paF acO {qct2=qc;generer("BNZ","",liste[qc-1].res,"");} CORPS {used($3);generer("+",$3,$7,$3);generer("BR",convert(qcT),"","");liste[qct2].op1=convert(qc);} acF
;


%%
int yyerror(char* msg){

	printf("%s : ligne %d , colonne : %d\n",msg,nb_ligne,nbcol);
	exit(EXIT_FAILURE);
}

int main()
{
init();
yyin=fopen("exemple.txt","r");
yyparse();
//delete_unused();
afficher();
affiche();
//delete_quad();
afficher_qdr();
assembler();
return 0;
}