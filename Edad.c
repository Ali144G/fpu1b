#include<stdio.h> /*Libreria de E/S 
Programa que determine la edad
*/
int N1;
int main() 
{//inicio 
printf("Dame el valor:");
scanf("%d",&N1);

	if(N1<=12)
	{
		printf("Niño");
	}
		else 
		{
		
		if(N1<=18)
		{
			printf("Adolescente");
		}
		
		else 
		{
		
			if(N1<=29)
			{
			printf("Joven");
			}
			else 
			{
				if(N1<=59)
				{
				printf("Adulto");
				}
			else{
	if(N1>=60)
	{
		printf("Adulto Mayor");
	}
	else 
	{
	 printf("roba oxigeno");
	}
}
}
}
}

}//fin 

