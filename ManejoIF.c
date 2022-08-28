#include <stdio.h>

int main()
{
	int x = 5;
	int y = 20;
	if (x == y)
	{
		printf("El resultado es igual %d", x);
	}
	else if (x>y)
	{
		printf("X = %d es mayor que Y = %d", x, y);
	}
	else
	{
		printf("X = %d es menor que Y = %d", x, y);
	}
	return(0);
}

