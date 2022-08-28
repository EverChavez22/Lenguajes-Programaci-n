/*
Realiza: Ever Chávez
Fecha: 24 ago 2022

Estructuras de contol
		while
		Ciclo3.c
*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int valor;
	do{
		printf("Ingrese un valor entre 0 y 999 (pulse 0 para finalizar): ");
		scanf("%d", &valor);
		if (valor >= 100)
		{
			printf("El valor tiene tres digitos\n");
		}
		else if (valor >= 10)
		{
			printf("El valor tiene dos digitos\n");
		}
		else
		{
			printf("El valor tiene un digito\n");
		}
	}while (valor != 0);
	getch();
	return(0);
}
