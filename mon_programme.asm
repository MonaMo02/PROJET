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
JNE etiquette 18
etiquette 15 : CMP AX, 0
JNE etiquette 18
etiquette 16 : JMP etiquette 19
etiquette 17 : JMP etiquette 24
etiquette 18 : MOV AX, i
ADD AX, 1
etiquette 19 : MOV DX, 
etiquette 20 : etiquette 21 : JMP etiquette 28
etiquette 22 : CMP AX, 0
JGE etiquette 31
etiquette 23 : JMP etiquette 32
etiquette 24 : JMP etiquette 37
FIN :
MOV AH,4CH
INT 21h
CODE ENDS
END MAIN
