#include<stdio.h>
#include<conio.h>
main()
{
      int A,B,Multiplo;
      printf("\nDigite A: ");
      scanf("%i",&A);
      printf("\nDigite B: ");
      scanf("%i",&B);
      if ((A%B==0)||(B%A==0))
      {
      printf("S�o multiplos entre si");
      }
      else
      {
          printf("N�o s�o multiplos entre si");
          }
          getch();
          }
