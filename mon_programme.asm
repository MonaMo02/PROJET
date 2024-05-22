********************DJERAOUI MOUNA SAD YASMINA ZOUAUOI DOUAA********************  
TITLE: mon_programme.asm 
DATA SEGMENT 
i DD ?
X DW '(-3.5)' 
Bx DD ?
Tab[0] DW ?
ab DW ?
DATA ENDS
CODE SEGEMENT
ASSUME CS:CODE, DS:DATA
MAIN :
MOV AX,DATA
MOV DS,AX
etiquette 0 : MOV AX, 5
DIV AX, 2
etiquette 1 : ADD AX, X
etiquette 2 : MOV DX, 
etiquette 3 : MOV AX, 15
ADD AX, 15
etiquette 4 : ADD AX, -3
MOV AX, T2
ADD AX, -3
etiquette 5 : MOV DX, 
etiquette 6 : etiquette 7 : MOV DX, 
etiquette 8 : JMP etiquette 10
etiquette 9 : MOV DX, 
etiquette 10 : CMP AX, 0
JGE etiquette 13
etiquette 11 : MOV DX, 
etiquette 12 : JMP etiquette 14
etiquette 13 : MOV DX, 
etiquette 14 : CMP AX, 0
JNE etiquette 17
etiquette 15 : CMP AX, 0
JNE etiquette 17
etiquette 16 : JMP etiquette 17
etiquette 17 : MOV AX, i
MUL AX, 4
etiquette 18 : JMP etiquette 21
etiquette 19 : MOV AX, i
ADD AX, 1
etiquette 20 : MOV DX, 
etiquette 21 : etiquette 22 : JMP etiquette 23
etiquette 23 : CMP AX, 0
JGE etiquette 31
etiquette 24 : JMP etiquette 25
etiquette 25 : MOV AX, i
MUL AX, 9
etiquette 26 : JMP etiquette 28
etiquette 27 : MOV AX, i
ADD AX, 2
FIN :
MOV AH,4CH
INT 21h
CODE ENDS
END MAIN
