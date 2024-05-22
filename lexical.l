%{
 #include<stdio.h>
 #include <string.h>
 #include"synt.tab.h"
 #include "TS.c"

 int nb_ligne=1;
 int nbcol=1;

 extern YYSTYPE yylval;
%}

commentaire "%%"(.)*
chiffre [0-9]

idf [A-Za-z]([a-z_]|{chiffre})* 
integer_pos [1-9][0-9]*|0
const_integer "("[+-]?([1-9][0-9]*|0)")"
const_float "("[+-]?([1-9][0-9]*|0)\.([0-9]*[1-9]|0)")"
float_pos ([1-9][0-9]*|0)\.([0-9]*[1-9]|0)
STRING_LITERAL \"[^"]*\"


%%
{commentaire} 

{const_float} {yylval.chaine=strdup(yytext);
    nbcol=nbcol+strlen(yytext);
    return const_float;
    }

{float_pos} {
    yylval.chaine=strdup(yytext);
    nbcol=nbcol+strlen(yytext);
    return float_pos;
}

{integer_pos} {
    if(atoi(yytext)>32767 || atoi(yytext)<-32768){
        printf("La taille de l'entier est depassee !!!!!\n");
    }else{
    yylval.chaine=strdup(yytext);
    nbcol=nbcol+strlen(yytext);
    return integer_pos;}
}

{const_integer} {
    if(atoi(strtok(yytext,"()"))>32767 || atoi(strtok(yytext,"()"))<-32768){
        printf("La taille de l'entier est depassee !!!!!\n");
    }else{
    yylval.chaine=strdup(yytext);
    nbcol=nbcol+strlen(yytext);
    return const_integer;}
    }

{STRING_LITERAL} {return STRING_LITERAL; }


{idf} {
    if(yyleng<=8) {
        yylval.chaine=strdup(yytext);
        nbcol=nbcol+strlen(yytext); 
        return idf;
    }else{
        printf("La taille de l'identificateur est trop longue !!!!!\n");
    }
    
    }    

"VAR_GLOBAL" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_VAR;
    }

    "DECLARATION" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_declaration;
    }

"INTEGER" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_integer;
    }

"FLOAT" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_float;
     }


"INSTRUCTION" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_instruction;
    }

"FOR" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_for;
     }

"IF" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_if;
     }

"READ" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_READ;
     }

"WRITE" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_WRTIE;
     }

"ELSE" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_else;
     }

"WHILE" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext);
    return mc_while;
    }



"CONST" {
    yylval.chaine=strdup(yytext);
    rechercher(yytext,"MOT CLE", 1);
    nbcol=nbcol+strlen(yytext); 
    return mc_const;
    }  

"+" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return plus;
    }

"-" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return moins;
    }

"/" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return divs;
    }

"*" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return mult;
    }      

"{" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return AcOuv;
     }
     
"}" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return AcFer;
     }

"[" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return CroOuv;
}

"]" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return CroFer;
}

";" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return pvg;
    }
"," {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return vrg;
    }

":" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return deuxpoints;
}
"." {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return point;
}

"(" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return ParOuv;
    }

")" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return ParFer;
    }    

"<" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return inf;
    }
    
"<=" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return infegale;
    }   

">" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return sup;
    }

">=" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return supegale;
    }    

"==" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return egale;
    }

"=" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext); 
    return affect;
    }

"!=" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return Diff;
}

"||" {
    
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return OR;
}

"&&" {
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return AND;
}

"!" {
    rechercher(yytext,"SEPARATEUR",2);
    nbcol=nbcol+strlen(yytext);
    return NOT;
}

[ \t] {nbcol=nbcol+yyleng;}
[\n] {nb_ligne++; nbcol=1;}
. {
    printf("!!ERREUR LEXICAL!! %s dans la ligne %d et dans la colonne %d\n",yytext,nb_ligne,nbcol);
     return err;
     }

%%
