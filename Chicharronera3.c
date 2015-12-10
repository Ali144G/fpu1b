#include <stdio.h>
float B1;
float A2;
float C3;
float Res;
int main()

{
	printf("Programa que resuelva la fórmula general\n");
	scanf("%f",&A2);
	scanf("%f",&B1);
	scanf("%f",&C3);
	
	Res=sqrt(B1*B1-4*A2*C3)/(2*A2);
	
printf("El resultado es%f",Res);
	
}

