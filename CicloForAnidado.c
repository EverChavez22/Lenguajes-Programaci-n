#include <stdio.h>

int main()
{
	int i, j, multi;
	for (i=1;i<=10;i++)
	{
		for (j=1;j<=10;j++)
		{
			multi = i * j;
			printf("%d * %d = %d\n", i, j, multi);
		}
		printf("--------------\n");
	}
	
	return (0);
}
