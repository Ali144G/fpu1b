#include <stdio.h>
#include <math.h>
float B1;
float A2;
float C3;
float Res1;
float Res2;
float Res3;
float Res4;
float Res5;
int main()
{
	printf ("Programa que resuelva la fórmula general\n");
	scanf ("%f", &B1);
	scanf ("%f", &A2);
	scanf ("%f", &C3);
	Res1=(B1*B1-4*A2*C3);
	Res4=sqrt(Res1);
	Res5=B1*(-1);
	Res2=2*A2;
	Res3=(Res5+Res1)/Res2;
	printf ("El resultado es:%f", Res2);
}
