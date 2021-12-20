//tendo 3 valores escreva eles em ordem decrescente.
#include<stdio.h>
#include<conio.h>
main()
{
      int N1,N2,N3,aux;
      printf("\n\nDigite N1: ");
      scanf("%i",&N1);
      printf("\n\nDigite N2: ");
      scanf("%i",&N2);
      printf("\n\nDigite N3: ");
      scanf("%i",&N3);
      if (N1<N2)
      {
      aux=N1;
      N1=N2;
      N2=aux;
      }
          if (N1<N3)
          {
          aux=N1;
          N1=N3;
          N3=aux;
          }
              if(N2<N3)
              {
              aux=N2;
              N2=N3;
              N3=aux;
              }
                printf("%i",N1);
                printf("%i",N2);
                printf("%i",N3);
                           getch();
                           }                  
