/*Manejo de numeros muy grandes en c
el Tablero de Ajedrez
*/

#include <stdio.h>

int main()
{
	int i;
	float res=1;
	for (i=1;i<=64;i++)
	{
		printf("Casilla %d= %.0f\n", i, res);
		res = res*2;
		
	}
	
	return 0;
}
