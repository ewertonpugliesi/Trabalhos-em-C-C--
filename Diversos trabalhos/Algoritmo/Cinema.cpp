//Conforme a quantidade de dinheiro fale para ir ao cinema ou para ficar em casa.
#include<stdio.h>
#include<conio.h>
main()
{
float Dinheiro;
printf("\nDigite o valor do dinheiro.....: ");
scanf("%f",&Dinheiro);
if (Dinheiro >=10)
{
       printf("\n V� ao cinema");
       }
       else
{
      if(Dinheiro<=10)
      printf("\n N�o v� ao cinema,fique em casa");
}          
           getch();
           }
