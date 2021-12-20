//Ler os numeros de 1 ate 12sendo cada um deles corresponentes a um mes.
//Sendo janero,fevereiro,março primeiro trimestre assim por diante.
//Conforme dados informar qual o mes e o seu trimestre ele pertence.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n\nDigite um numero de 1 a 12: ");
    scanf("%i",&num);
    switch(num)
    {
               case 1:
               case 2:
               case 3:
              printf("\n\nPrimeiro Trimestre\n");
              break;
              case 4:
              case 5:
              case 6:
                   printf("\n\nsegundo Trimestre\n");
                   break;
             case 7:
             case 8:
             case 9:
                  printf("\n\nTerceiro Trimestre\n");
                  break;
             case 10:
             case 11:
             case 12:
                  printf("\n\nQuarto Trimestre\n");
                  break;
                  default:
                          printf("\n\nErro\n");
                          break;
                          }
                          getch();
                          }                                                 
                         
