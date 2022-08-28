/*
Realiza: Ever Chávez
Fecha: 24 ago 2022

Estructuras de contol
		while
		Ciclo2.c
*/

#include <stdio.h>
int main()
{
	int tabla, cont, multi;
	cont = 1;
	printf("Ingresa que tabla del 1 al 10 deseas imprimir: ");
	scanf("%d", &tabla);
	if (tabla <= 10 && tabla >= 1)
	{
		while (cont <= 10 && cont >= 1)
		{
			multi = tabla * cont;
			printf("%d * %d = %d\n", tabla, cont, multi);
			cont++;	
		}
	}
	else
	{
		printf("No se indico un valor valido");
	}
	
	return(0);
}
