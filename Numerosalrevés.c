#include<stdio.h>
int n[10];
int i=0; 
int rev;
int main()
{
	printf ("Escribe la cantidad\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(rev=9;rev>-1;rev--)
	{
		printf("\n%d",n[rev]);
	}
}

