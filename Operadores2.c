/*************************************
Realiza: Ever Chávez
Fecha: 23 Agosto 2022
Manejo de operadores logicos y de relacion
Operadores2.c

************************************************/
#include <stdio.h>

int main()
{
	int A=0;
	int B=0;
	
	printf("Tabla AND &&\n");
	printf("(A = %d) && (B = %d) el resultado seria: %d\n", A, B, A&&B);
	printf("(A = %d) && (B = %d) el resultado seria: %d\n", A, !B, A&&!B);
	printf("(A = %d) && (B = %d) el resultado seria: %d\n", !A, B, !A&&B);
	printf("(A = %d) && (B = %d) el resultado seria: %d\n", !A, !B, !A&&!B);
	printf("Tabla OR ||\n");
	printf("(A = %d) || (B = %d) el resultado seria: %d\n", A, B, A||B);
	printf("(A = %d) || (B = %d) el resultado seria: %d\n", A, !B, A||!B);
	printf("(A = %d) || (B = %d) el resultado seria: %d\n", !A, B, !A||B);
	printf("(A = %d) || (B = %d) el resultado seria: %d\n", !A, !B, !A||!B);

	return(0);
}
