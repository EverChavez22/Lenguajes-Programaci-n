#include <stdio.h>

int sumar()
{
	int i;
	int total=0;
	for (i=1;i<=100;i++)
	{
		total = total + i;
	}
	return (total);
}

int main()
{
	int salida;
	printf("Programa para sumar los numeros de 1 a 100\n");
	salida = sumar();
	printf("El resultado es: %d\n", salida);
	return(0);
}
