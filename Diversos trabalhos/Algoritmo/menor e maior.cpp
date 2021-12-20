//escreva sete numeros e diga qual o maior e o menor deles.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,maior=0,menor=0,num;
      while(cont<=num)
      {
      printf("Digite um numero");
      scanf("%i",&num);
       if(num>maior)
       {
       maior=num;
       }
       else
       {
           if(num<maior)
           {
           menor=num;
           }
           }
           cont+2;
              printf("\n\ncont%i",cont);
              
              }
              printf("\nMaior eh:%i",maior);
              printf("\nMenor eh:%i",menor);
      getch();
      }                    
