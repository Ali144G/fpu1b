#include <stdio.h>

int N1;
int num; 
int i; 

int main ()
{
		printf ("Programa que calcule los dias para salir\n");
		printf ("Dame el numero");
		scanf ("&d", &N1);
		num = 1;
		while (num <= N1)
	{
		i = 1;
		while (i <= num)
		{
			printf ("&d", num);
			i++;
		}
		printf("\n");
		num++;
	}
		system ("pause");
}
