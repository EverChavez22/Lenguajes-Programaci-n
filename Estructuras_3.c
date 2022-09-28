#include <stdio.h>
#include <string.h>
int main()
{
	int cont, cumple;
	char nom[20];
	float calif;
	struct datosPersonas
	{
		char nombre[20];
		int edad;
		float calif1;
	}persona[20];
	/*persona[1].nombre = 'Lino';
	strcpy(persona[1].nombre, "Lino");
	persona[1].edad=20;
	persona[1].calif1=8.8;
	printf("%s tiene %d a%cos y su calificacion es de %.2f\n", persona[1].nombre, persona[1].edad, 164, persona[1].calif1);
	*/
	for (cont = 0; cont <= 4; cont++)
	{
		printf("Ingresa el nombre de la persona %d: \n", cont+1);
		gets(nom);
		strcpy(persona[cont].nombre,nom);
		printf("Ingresa la edad de la persona %d: \n",cont+1);
		scanf("%d",&cumple);
		persona[cont].edad = cumple;
		printf("Ingresa la calificacion de la persona %d: \n",cont+1);
		scanf("%f",&calif);
		persona[cont].calif1 = calif;
		fflush(stdin);
		printf("%s tiene %d a%cos y su calificacion es de %.2f\n\n", persona[cont].nombre, persona[cont].edad, 164, persona[cont].calif1);
	}
	return 0;
}