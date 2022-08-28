/*************************************
Realiza: Ever Chávez
Fecha: 23 Agosto 2022
Manejo de operadores logicos y de relacion
Operadores.c

************************************************/
#include <stdio.h>

int main()
{
	int A=5;
	int B=7;
	
	printf("(A == B)&&(A < B) el resultado seria: %d\n", (A==B)&&(A<B));
	printf("(A == 5)||(A > 7) el resultado seria: %d\n", (A == 5)||(A > 7)); 
	printf("!(A == 5) el resultado seria: %d\n", !(A == 5)); 
	return(0);
}

