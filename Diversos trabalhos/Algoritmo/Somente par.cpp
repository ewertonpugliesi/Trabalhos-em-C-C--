//Diga se um numero e parem caso afirmativo diga que sim.
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
                          printf("\n \nO numero não e par");
                          }
                          getch();
                          }
