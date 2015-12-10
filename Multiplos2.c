#include<stdio.h>
int multi[10]; 
int plo; 
int i=0;
int main()
{
	printf ("Escribe el numero\n");
	scanf("%d",&plo);
	for(i=0;i<10;i++)
	{
		multi[i]=plo*(i+1);
		printf("\n%d",multi[i]);
	}
}

