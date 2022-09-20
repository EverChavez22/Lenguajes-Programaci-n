/* Manejo de numeros aleatorios
mediante la funcion rand y srand
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int valor;
	srand(time(NULL));
	valor=rand()%51;
	int respuesta = -1;
	int cont=0;
	while (respuesta != valor)
	{
		cont++;
		printf("Escribe un numero aleatorio de 0 a 50: ");
		scanf("%d", &respuesta);
		if (respuesta < valor)
			printf("Intenta de nuevo pero un poco MAS ALTO\n");
		else if (respuesta > valor)
			printf("Intenta de nuevo pero un numero MAS BAJO\n");
		else if (respuesta = valor)
			printf("FELICIDADES encontraste el numero en %d intentos\n", cont);
		if (cont==5)
		{
			printf("No pudiste encontrar el numero aleatorio\n");
			printf("El numero aleatorio es: %d", valor);
			respuesta=valor;
		}
	}
	
	return 0;
}
