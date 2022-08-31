#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int opc=1, num1, potencia;
	float resultado, num, num2;
	while (opc!=5)
	{
		system("cls");
		printf("Escoje una opcion para realizar\n");
		printf("1.- Determinar si es par o impar\n");
		printf("2.- Raiz cuadrada de un numero\n");
		printf("3.- Elevar a una potencia\n");
		printf("4.- Mayor o menor\n");
		printf("5.- Salir\n");
		printf("Cual es la opcion deseada?: ");
		scanf("%d", &opc);
		switch (opc)
		{
			case 1:
			printf("Ingresa un numero entero cualquiera: ");
			scanf("%d", &num1);
			if (num1%2==0)
			{
				printf("El numero %d es par\n", num1);
			}
			else
			{
				printf("El numero %d es impar\n", num1);
			}
			system("pause");
			break;
			
			case 2:
			printf("Ingresa un numero positivo cualquiera: ");
			scanf("%f", &num);
			if (num>0)
			{
				resultado= sqrt(num);
				printf("La raiz de %.1f es: %.2f\n", num, resultado);
			}
			else
			{
				printf("No se ingreso un numero valido\n");
			}
			system("pause");
			break;
			
			case 3:
			printf("Ingresa un numero cualquiera: ");
			scanf("%f", &num);
			printf("Ingresa la potencia a elevar: ");
			scanf("%d", &potencia);
			resultado= pow(num, potencia);
			printf("El numero %.1f elevado a la potencia %d es: %.1f\n", num, potencia, resultado);
			system("pause");
			break;
			
			case 4:
			printf("Ingresa un primer numero cualquiera: ");
			scanf("%f", &num);
			printf("Ingresa un segundo numero cualquiera: ");
			scanf("%f", &num2);
			if (num > num2)
			{
				printf("%.1f es mayor que %.1f\n", num, num2);
			}
			else
			{
				printf("%.1f es mayor que %.1f\n", num2, num);
			}
			system("pause");
			break;
			
			case 5:
			printf("Seleccionaste salir\n");
			break;
			
			default:
			printf("Seleccionaste una opcion que no esta definida\n");
			break;	
		}
	}
	system("pause");
	return(0);
}
