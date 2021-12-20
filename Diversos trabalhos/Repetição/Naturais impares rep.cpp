//Dado N mosre os n primeiros numeros naturais impares.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,N,res=1;
      printf("Digite N: ");
      scanf("%i",&N);
      while (cont<=N)
      {
            res=res+2;
            printf("\n\n%i",cont);
            cont++;
            }
            printf("\n\n%i",res);
            getch();
            }
