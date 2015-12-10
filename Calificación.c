#include<stdio.h> /*Libreria de E/S 
Programa que determine la calificación
*/
int N1;
int main() 
{//INICIO
printf("Dame el valor:");
scanf("%d",&N1);

	if(N1>=7)
	{
		printf("Pasaste");
	}
	else 
	{
		printf("Reprobaste");
	}
}//FIN
