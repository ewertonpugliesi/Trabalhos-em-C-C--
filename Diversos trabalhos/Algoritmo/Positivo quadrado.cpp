//Calcule o quadrado positivo tendo valor de N.
//Usando a soma dos n primeiros termos.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,N,res=1,soma=1;
      printf("\n\nDigite um numero: ");
      scanf("%i",&N);
      while (cont<=N)
      {
            printf("\n\n%i",res);
            soma=soma+res;
            res=res+2;
            cont++;
            }
            printf("\n\n%i",&soma);
            getch();
            }
