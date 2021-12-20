#include<stdio.h>
#include<conio.h>
 int main()
{
    float Valor,Preso;
    char tipo;
    printf("\n\n Digite Preço do produto em reais: \n");
    scanf("%f",&Preso);
    switch(tipo)
    {
              case 1:
              Valor=Preso-Preso*0.2;
              printf("\n\n Valor avista\n");
                break;
                case 2:
                     Valor=Preso-0.1*Preso;
           printf("\n\n Valor avista cheque\n");
           break;
           case 3:
                Valor =Preso;
                printf("\n\n Valor a vista cartão\n");
                break;
                case 4:
                     Valor=(Preso+0.1*Preso)/2;
                     printf("\n\n Valor em 2 vezes\n");
                     break;
                     case 5:
                          Valor=(Preso+0.2*Preso)/3;
                          printf("\n\nValor em 3 vezes\n");
                          break;
                          case 6:
                               Valor=(Preso+0.3*Preso)/6;
                               printf("\n\n Valor em 6 vezes");
                                break;
                                default:
                                        printf("\n\n Errado\n");
                                        }
                                        getch();
                                        }
