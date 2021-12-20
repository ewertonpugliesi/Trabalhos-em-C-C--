//Calcule o valor de B^N,sem usar pow e N>=2 e B>1.
#include<stdio.h>
#include<conio.h>
main()
{
      int elev=1,B=1,N=1,cont=1;
      while (B<2)
      {
      printf("\n\nEscreva B: ");
      scanf("%i",&B);
            }
            printf("\n\n");
      while(N<=1)
      {
      printf("\n\nEscreva N : " );
      scanf("%i",&N);
      }
      printf("n\n");
      while (cont<=N)
      {
            elev*=B;
            cont++;
            }
            printf("\n\nO numero%ielevado a %ieh:%i",B,N,elev);
            getch();
            }
