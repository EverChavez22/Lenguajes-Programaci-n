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
	archivo = fopen("datos.txt","a");
	printf("Escribe el Nombre a Almacenar: ");
	scanf("%[^\n]", nombre); //Captura todo lo que encuentre hasta detectar el "enter"
	//scanf("%[^\n]", nombre); //Captura todo lo que encuentre hasta detectar el "enter"
	fflush(stdin);
	fputs(nombre, archivo);
	fputs(" ", archivo);
	printf("Que edad tiene: ");
	scanf("%s", edad);
	fflush(stdin);
	fputs(edad, archivo);
	fputs(" ,", archivo);
	printf("Cual es la estatura: ");
	scanf("%s", estatura);
	fflush(stdin);
	fputs(estatura, archivo);
	fputs("\n", archivo);
	fclose(archivo);
	return 0;
}