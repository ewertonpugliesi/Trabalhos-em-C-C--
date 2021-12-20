#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,Aux;
      printf("\n\nDigite o valor de a.....");
      scanf("%i",&a);
      printf("\n\nDigite o valor de b......");
      Aux=a;
      a=b;
      b=Aux;
      printf("\n\nO VALOR TROCADO DE a %c : %i", 130, a);
      printf("\n\nO VALOR TROCADO DE b %c : %i", 130, b);

  getch();
      }
      
      
