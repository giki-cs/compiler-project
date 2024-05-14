/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MINIC_TAB_H_INCLUDED
# define YY_YY_MINIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "minic.y"

	#include "tree.h"

#line 53 "minic.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tVAR = 258,                    /* tVAR  */
    tFLOAT = 259,                  /* tFLOAT  */
    tINT = 260,                    /* tINT  */
    tBOOL = 261,                   /* tBOOL  */
    tSTRING = 262,                 /* tSTRING  */
    tPRINT = 263,                  /* tPRINT  */
    tWHILE = 264,                  /* tWHILE  */
    tIF = 265,                     /* tIF  */
    tELSE = 266,                   /* tELSE  */
    tREAD = 267,                   /* tREAD  */
    tGT = 268,                     /* tGT  */
    tGTE = 269,                    /* tGTE  */
    tST = 270,                     /* tST  */
    tSTE = 271,                    /* tSTE  */
    tEQUAL = 272,                  /* tEQUAL  */
    tLOGIC_AND = 273,              /* tLOGIC_AND  */
    tLOGIC_OR = 274,               /* tLOGIC_OR  */
    tNEQUAL = 275,                 /* tNEQUAL  */
    tBOOL_LITERAL = 276,           /* tBOOL_LITERAL  */
    tSTRING_LITERAL = 277,         /* tSTRING_LITERAL  */
    tINT_LITERAL = 278,            /* tINT_LITERAL  */
    tFLOAT_LITERAL = 279,          /* tFLOAT_LITERAL  */
    tIDENTIFIER = 280              /* tIDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "minic.y"

    int int_val;
    char *string_val;
    float float_val;
    bool bool_val;
    struct EXP *exp;
    struct STMT_LIST *stmt_list;
    struct STMT *stmt;
    struct TYPE *type;
    struct IFSTMT *if_stmt;

#line 107 "minic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_MINIC_TAB_H_INCLUDED  */
