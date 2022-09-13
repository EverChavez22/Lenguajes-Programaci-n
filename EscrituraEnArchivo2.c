#include <stdio.h>
#include <stdlib.h>
// Captira mediante teclado de cadenas de caracteres
//que se almacenan en archivo de texto
int main ()
{
	char nombre[40];
	char edad[3];
	char estatura[4];
	FILE * archivo;
	archivo = fopen("datos.csv","a");
	int cont = 1;
	while (cont <= 3)
	{
	printf("Escribe el Nombre a Almacenar: ");
	gets(nombre); //Captura todo lo que encuentre hasta detectar el "enter"
	//scanf("%[^\n]", nombre); //Captura todo lo que encuentre hasta detectar el "enter"
	fputs(nombre, archivo);
	fputs(" ,", archivo);
	printf("Que edad tiene: ");
	gets(edad);
	fputs(edad, archivo);
	fputs(" ,", archivo);
	printf("Cual es la estatura: ");
	gets(estatura);
	fputs(estatura, archivo);
	fputs("\n", archivo);
	cont++;
	}
	fclose(archivo);
	return 0;
}