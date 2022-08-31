#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int opcion=1;
	float radio, area, base, altura;
	while (opcion!=4)
	{
		system("cls");
		printf("1.- Calcular el area de un circulo\n");
		printf("2.- Calcular el area de un triangulo\n");
		printf("3.- Calcular el area de un rectangulo\n");
		printf("4.- Salir\n");
		printf("Cual es la opcion deseada: ");
		scanf("%d", &opcion);
		switch (opcion)
		{
			//Instrucciones si opcion=1
			case 1:
			printf("Seleccionaste la opcion 1\n");
			printf("Escribe el valor de el radio: ");
			scanf("%f", &radio);
			area= (3.141516)*(radio*radio);
			printf("El area de el circulo es: %.2f\n", area);
			system("pause");
			break;
				
			case 2:
			printf("Seleccionaste la opcion 2\n");
			printf("Ingrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			area= (base * altura)/2;
			printf("El valor de el area es: %.2f\n", area);
			system("pause");
			break;
			
			case 3:
			printf("Selecicionaste la opcion 3\n");
			printf("Ingrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			area= (base * altura);
			printf("El valor de el area es: %.2f\n", area);
			system("pause");
			break;
			
			case 4:
			printf("Seleccionaste la opcion 4\n");
			break;
			
			default:
			printf("Seleccionaste una opcion que no esta definida\n");
			break;	
		} //Cierre de el switch
		
	} //Cierre de el while
	system("pause");
	return (0);
} //Cierre de el main
