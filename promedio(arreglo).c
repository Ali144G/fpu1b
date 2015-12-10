#include <stdio.h>
int calif [10];
float a; 
int i=0;
int suma=0; 
int main ()

{
	for (i=0; i<10; i++)
	
	{ printf("Escribe las calificaciones");
	  scanf("%d", &calif[i]);
	  suma+=calif[i];
	  if (i==9)
	{
	  a=suma/10;
	  printf ("\nPromedio:%f\n\n",a); 
	  break; 	
   		 }
	}
		
}
