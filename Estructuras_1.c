#include <stdio.h>
int main()
{
	struct datoPersonas
	{
		char inicial;
		int edad;
		float calif1;
	}persona;
	persona.inicial = 'L';
	persona.edad = 20;
	persona.calif1 = 7.8;
	printf("La inicial es: %c\n",persona.inicial);
	printf("La edad capturada es: %d\n",persona.edad);
	printf("La calificacion obtenida es: %.2f\n", persona.calif1);
	return 0;
}