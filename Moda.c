#include<stdio.h>
int c[10]; 
int moda[10]; 
int mayor=0;
int posmayor; 
int i=0; 
int suma=0; 
float promedio;
int main()
{
	printf("Dame valores\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&c[i]);
		suma+=c[i];
		if(i==9)
		{
			promedio=suma/10;
			printf("promedio:%f\n",promedio);
		}
	}
	for(i=0;i<10;i++)
	{
		moda[i]=0;
	}
	for(i=0;i<10;i++)
	{
		moda[c[i]-1]++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",moda[i]);
	}
}
