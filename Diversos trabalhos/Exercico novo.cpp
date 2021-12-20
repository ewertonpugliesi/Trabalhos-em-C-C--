//Ver se um numero e primo ou não.
#include<stdio.h>
#include<conio.h>
main()
{
      int N,cont=1;
          printf("Escreva um numero: ");
          scanf("%i",&N);
          do
          {
                         if (N%1==0)&&(N%N==0)
                         {
                         printf("Numero eh Primo");
                         }
                         else
                         {
                         if(N%2==0)
                         {
                                   printf("Numero nao eh primo");
                                   }
                                   }
                                   cont++;
                                   }
                         while(cont<=N);
                                   getch();
                                   }     
