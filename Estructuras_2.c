#include <stdio.h>
int main()
{
	struct datosPersonas
	{
		char nombre[20];
		int edad;
		float calif1;
	};
	struct datosPersonas personas={"Lino",30,9};
	printf("El nombre %s\n", personas.nombre);
	printf("La edad es: %d\n", personas.edad);
	printf("La calificacion es: %.2f", personas.calif1);
	
	return 0;
}