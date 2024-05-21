%{
 #include<stdio.h>
 #include <string.h>
 #include"synt.tab.h"
 #include "TS.h"
 #include "TSH.h"
 

 int nb_ligne=1;
 int nbcol=1;

 extern YYSTYPE yylval;
%}

commentaire "%%"(.)*
chiffre [0-9]

idf [A-Za-z]([a-z_]|{chiffre})* 
integer_naturel [1-9][0-9]*|0
num_integer "("[+-]?([1-9][0-9]*|0)")"
num_float "("[+-]?([1-9][0-9]*|0)\.([0-9]*[1-9]|0)")"
float_s ([1-9][0-9]*|0)\.([0-9]*[1-9]|0)
STRING_LITERAL \"[^"]*\"


%%
{commentaire} 

{num_float} {yylval.chaine=strdup(yytext);
    printf("float reconnue %s\n",yytext);
    nbcol=nbcol+strlen(yytext);
    return num_float;
    }

{float_s} {
    yylval.chaine=strdup(yytext);
    printf("float reconnue %s\n",yytext);
    nbcol=nbcol+strlen(yytext);
    return float_s;
}

{integer_naturel} {
    if(atoi(yytext)>32767 || atoi(yytext)<-32768){
        printf("La taille de l'entier est depasser !!!!!\n");
    }else{
    yylval.chaine=strdup(yytext);
    printf("entier_naturel reconnue %s\n",yytext);
    nbcol=nbcol+strlen(yytext);
    return integer_naturel;}
}

{num_integer} {
    if(atoi(strtok(yytext,"()"))>32767 || atoi(strtok(yytext,"()"))<-32768){
        printf("La taille de l'entier est depasser !!!!!\n");
    }else{
    yylval.chaine=strdup(yytext);
    printf("entier reconnue %s\n",yytext);
    nbcol=nbcol+strlen(yytext);
    return num_integer;}
    }

{STRING_LITERAL} {return STRING_LITERAL; }


{idf} {
    if(yyleng<=8) {
        yylval.chaine=strdup(yytext);
        printf("entite_reconnue %s\n",yytext);
        //insere(yytext,0,"0");
        nbcol=nbcol+strlen(yytext); 
        return idf;
    }else{
        printf("La taille de l'identificateur est trop longue !!!!!\n");
    }
    
    }    

"VAR_GLOBAL" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_VAR;
    }

    "DECLARATION" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_declaration;
    }

"INTEGER" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_integer;
    }

"FLOAT" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_float;
     }


"INSTRUCTION" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_instruction;
    }

"FOR" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_for;
     }

"IF" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_if;
     }

"READ" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_READ;
     }

"WRITE" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_WRTIE;
     }

"ELSE" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_else;
     }

"WHILE" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_while;
    }



"CONST" {
    yylval.chaine=strdup(yytext);
    printf("mc_reconnue %s\n",yytext);
    rechercher(yytext,"Mot cle", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_const;
    }  

"+" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return ADD;
    }

"-" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return SUB;
    }

"/" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return DIV;
    }

"*" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return MUL;
    }      

"{" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return acO;
     }
     
"}" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return acF;
     }

"[" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return croO;
}

"]" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return croF;
}

";" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return pvg;
    }
"," {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return vrg;
    }

":" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return deuxpoints;
}
"." {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return point;
}

"(" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return paO;
    }

")" {
    printf("sep_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return paF;
    }    

"<" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return inf;
    }
    
"<=" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return infegale;
    }   

">" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return sup;
    }

">=" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return supegale;
    }    

"==" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return egale;
    }

"=" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext); 
    return affecter;
    }

"!=" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return different;
}

"||" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return OU;
}

"&&" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return ET;
}

"!" {
    printf("oper_reconnue %s\n",yytext);
    rechercher(yytext,"Separateur",2);
    nbcol=nbcol+strlen(yytext);
    return negation;
}

[ \t] {nbcol=nbcol+yyleng;}
[\n] {nb_ligne++; nbcol=1;}
. {
    printf("erreur lexical %s dans la ligne %d et dans la colonne %d\n",yytext,nb_ligne,nbcol);
     return err;
     }

%%
