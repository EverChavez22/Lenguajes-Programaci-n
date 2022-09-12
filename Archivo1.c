#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE* archivo;
	archivo = fopen("almacen1.txt", "r");
	fputs("Ya estas programando y trabajando con archivos\n", archivo);
	fputs("requiere un gran esfuerzo y dedicacion\n", archivo);
	fputs("Pero el Resultado, vale la pena\n", archivo);
	fclose(archivo);
	printf("Proceso terminado correctamente");
	
	return(0);
}

/*
Las formas de abrir el archivo son estas:
r - Abre el archivo en modo solo lectura
w - Abre el archivo para escritura (Si no existe lo crea, si existe lo remplaza)
a - Abre el archivo para agregar informacion (Si no existe lo crea)
r+ - Abre el archivo para lectura/escritura (comienza al principio de el archivo)
w+ - Abre el archivo para lectura/escritura (sobre-escribe el archivo si ya existe, lo crea si no)
a+ - Abre el archivo para lectura/escritura (Se sitúa al final de el archivo)
*/