#include <stdio.h>

int main()
{
	int i, j;
	for (i=1;i<=10;i++)
	{
		printf("El contador es = %d\n",i);
		for (j=1;j<=10;j++)
		{
			printf("El contador de el segundo ciclo es = %d\n",j);
		}
	}
	
	
	return (0);
}
