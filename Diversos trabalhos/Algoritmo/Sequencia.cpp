//Dado N calcule os n termos de uma sequencia.
#include<stdio.h>
#include<conio.h>
main()
{
      int N,res=1,cont=1;
      printf("Digite N; ");
      scanf("%i",&N);
      while (cont<=N)
      {
            printf("\n\n%i",cont);
            res=res+cont;
            cont++;
            }
            printf("\n\n%i",res);
            getch();
            }
