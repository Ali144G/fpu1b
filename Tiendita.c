
#include<stdio.h>//libreria de E/S
/*Tiendita*/
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)papas $10\n(2)refrescos $20\n(3)paletas $1\n(4)chicles $1\n(5)jugos $6\n(6)Tacos $20\n(7)galletas $8\n(8)gomitas $1\n(9)Pan $14\n(10)desayunos $30\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantas papas quieres?\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d",total);
		break;
	}
	case 2: {
		printf("¿cuantos refrescos quieres?\n");
		scanf("%d",&N1);
		total=N1*20;
		printf("total:%d",total);
		break;
	}
	case 3: {
		printf ("¿cuantas paletas quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿cuantos chicles quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿cuantos jugos naturales quieres?\n");
		scanf("%d",&N1);
		total=N1*6;
		printf ("total:%d",total);
		break;
	}
	case 6:{
		printf("cuantas tacos quiere\n");
		scanf("%d",&N1);
		total=N1*20;
		printf("total:%d",total);
		break;
	}
	case 7:{
		printf("¿cuantas galletas quiere?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 8:{
		printf("¿cuantas gomitas quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf("total:%d",total);
		break;
	}
	case 9:{
		printf("¿cuanto pan quieres?\n");
		scanf("%d",&N1);
		total=N1*14;
		printf("total:%d",total);
		break;
	}
	case 10:{
		printf("¿cuantos desayunos quieres?\n");
		scanf("%d",&N1);
		total=N1*30;
		printf("total:%d",total);
		break;
	}
	defaul:{
	printf("no hay");
		break;	
}
}
}//fin

