********************DJERAOUI MOUNA SAD YASMINA ZOUAUOI DOUAA********************  
TITLE: mon_programme.asm 
DATA SEGMENT 
Tab[1] DW ?
Array[1] DW ?
Array[8] DW ?
t3 DD ?
Array[6] DW ?
Tab[4] DW ?
t1 DD ?
j DD ?
Array[4] DW ?
a DD ?
Tab[2] DW ?
X DW '(-3.5)' 
Tab DW 5 DUP ?
Array[2] DW ?
ab DW ?
Array DW 10 DUP ?
Tab[0] DW ?
Bx DD ?
Array[9] DW ?
f DD ?
Array[0] DW ?
Array[7] DW ?
t2 DD ?
Array[5] DW ?
Tab[3] DW ?
i DD ?
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
etiquette 3 : MOV AX, 7
MUL AX, 15
etiquette 4 : ADD AX, -3
MOV AX, T2
ADD AX, -3
etiquette 5 : MOV DX, 
etiquette 6 : MOV AX, ab
SUB AX, 2
etiquette 7 : CMP AX, 0
JNE etiquette 
etiquette 8 : MOV AX, Bx
SUB AX, 20
etiquette 9 : CMP AX, 0
JGE etiquette 18
etiquette 10 : CMP AX, 0
JE etiquette 14
etiquette 11 : CMP AX, 0
JE etiquette 14
etiquette 12 : MOV DX, 1
etiquette 13 : JMP etiquette 15
etiquette 14 : MOV DX, 0
etiquette 15 : MOV AX, i
MUL AX, 4
etiquette 16 : MOV DX, 
etiquette 17 : JMP etiquette 20
etiquette 18 : MOV AX, i
ADD AX, 1
etiquette 19 : MOV DX, 
etiquette 20 : MOV AX, ab
SUB AX, 6
etiquette 21 : CMP AX, 0
JNE etiquette 27
etiquette 22 : MOV AX, Bx
SUB AX, 10
etiquette 23 : CMP AX, 0
JGE etiquette 27
etiquette 24 : MOV AX, i
MUL AX, 9
etiquette 25 : MOV DX, 
etiquette 26 : JMP etiquette 29
etiquette 27 : MOV AX, i
ADD AX, 2
etiquette 28 : MOV DX, 
FIN :
MOV AH,4CH
INT 21h
CODE ENDS
END MAIN
