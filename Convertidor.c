#include<stdio.h>
/*Convertir de Mb a b,by,kb,mb,gb,tb
*/
float b;
float by;
float kb;
float mb;
float gb;
float tb;

int main ()
{//Inicio 
    b=1;
    by=8;
    kb=8388608;
    mb=1024;
    gb=9765625;
    tb=1048576;
printf("Ingresar el numero de Mb:/n ");
scanf("% f" ,&mb);
b=(mb*mb*kb*by);
printf("en bit equivale a:%f/n",b);
by=(mb*mb*kb);
printf("en byte equivale a:%f/n",by);
gb=(mb*gb);
printf("en Gigabytes equivalea: %f/n",gb);
tb=(mb/gb*tb);
printf("en Terbyteequivale a:%f/n",tb);

}//Fin 


