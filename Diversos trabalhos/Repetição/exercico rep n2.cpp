//Encontre o quadrado de um numero positivo,somando os n primeiros numeros.
//Usando for,do,while.
#include<stdio.h>
#include<conio.h>
main()
{
      int N,soma=0,cont=1,res=1;
printf("\n\nescreva um numero ");
scanf("%i",&N);
do
{
               printf("\n\n%i",res);
               soma=soma+res;
               res=res+2;
               cont++;
               printf("\n\n%i",soma);
               }
               while(cont<=N);
               getch();
               }
