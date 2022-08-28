/*************************************
Realiza: Ever Chávez
Fecha: 23 Agosto 2022
Manejo de operadores logicos y de relacion
Lectura.c

************************************************/
#include <stdio.h>

int main()
{	
	int val_1;
	int val_2;
	printf("Vamos a capturar dos valores y comparar si son iguales\n");
	printf("Escribe el primer valor: ");
	scanf("%d", &val_1);
	printf("Escribe el segundo valor: ");
	scanf("%d", &val_2);
	if (val_1 == val_2)
	{
		printf("Los valores son iguales\n");
	}
	else if (val_1 > val_2)
	{
		printf("Valor 1 es mayor a valor 2\n");
	}
	else
	{
		printf("Valor 2 es mayor a valor 1\n");
	}
	return(0);
}
