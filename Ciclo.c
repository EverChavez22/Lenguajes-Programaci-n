/*
Realiza: Ever Chávez
Fecha: 24 ago 2022

Estructuras de contol
		while
		Ciclo.c
*/

#include <stdio.h>
int main()
{
	int contador, num;
	contador = 1;
	printf("Escribe un numero entero: ");
	scanf("%d", &num);
	while (contador <= num)
	{
		printf("Contador = %d\n", contador);
		contador++;
		
	}
	
	return(0);
}
