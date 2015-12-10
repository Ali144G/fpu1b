//programa que sume,reste,multiplique y divida
#include<stdio.h>//libreria de E/S
float resultado;
float numero1;
float numero2;
int main()
{
	printf("dame un  numero");
	scanf("%f",&numero1);
	printf("dame un numero");
	scanf("%f",&numero2);
	resultado=numero1+numero2;
	printf("el resultado es %f",resultado);
	resultado=numero1-numero2;
	printf("el resultado es %f",resultado);
	resultado=numero1*numero2;
	printf("el resultado es %f",resultado);
	resultado=numero1/numero2;
    printf("el resultado es %f",resultado);
}
