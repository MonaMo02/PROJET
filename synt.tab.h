
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_VAR = 258,
     mc_instruction = 259,
     mc_WRTIE = 260,
     mc_READ = 261,
     mc_declaration = 262,
     VEC = 263,
     mc_integer = 264,
     mc_float = 265,
     mc_const = 266,
     mc_if = 267,
     mc_else = 268,
     mc_for = 269,
     mc_while = 270,
     AcOuv = 271,
     AcFer = 272,
     pvg = 273,
     vrg = 274,
     ParOuv = 275,
     ParFer = 276,
     CroFer = 277,
     CroOuv = 278,
     deuxpoints = 279,
     point = 280,
     affect = 281,
     idf = 282,
     err = 283,
     STRING_LITERAL = 284,
     INTEGER = 285,
     FLOAT = 286,
     integer_pos = 287,
     float_pos = 288,
     const_float = 289,
     const_integer = 290,
     OR = 291,
     AND = 292,
     NOT = 293,
     Diff = 294,
     egale = 295,
     supegale = 296,
     sup = 297,
     infegale = 298,
     inf = 299,
     moins = 300,
     plus = 301,
     divs = 302,
     mult = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 20 "synt.y"

char * chaine;
struct N
{
	char * val;
	char * type;
    char * ch;
}element;



/* Line 1676 of yacc.c  */
#line 112 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


