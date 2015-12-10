#include <stdio.h>

int res;
int N1; 
int main ()

{
	printf ("Dame el primer numero");
	scanf ("%d", &N1);
	res=N1%2;
	
	 	if  (res==0)
	 	{
	 		printf ("par");
	 	}
		else
	 	{
	 	printf ("impar");
    	}
}
