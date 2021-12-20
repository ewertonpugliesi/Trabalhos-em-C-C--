//Digite um numero e diga se este e  par ou impar.
#include<stdio.h>
#include<conio.h>
main()
{
      int Numero;
      printf("\n\n Digite um numero inteiro qualquer.....: ");
      scanf("%i",&Numero);
      if(Numero %2 == 0)
      {
                      printf("\n\n O numero %i eh Par",Numero);
      }
                      else
                      {
                          printf("\n \nO numero %i eh Impar",Numero);
                          }
                          getch();
                          }
