//Construa uma calculadora que fa�a a adi��o,subtra��o,divis�o,multiplica��o,elevado,mostre resto.
//De dois numeros.
#include<stdio.h>
#include<conio.h>
int main()
{
    int cond,valor1,valor2;
    float soma,menos,vezes,divisao,resto,elevado;
    printf("Digite valor 1: ");
    scanf("%i",&valor1);
    printf("Digite valor 2: ");
    scanf("%i",&valor2);
    printf("Digite cond de 1 a 6: ");
    scanf("%i",&cond);
    switch(cond)
    {
    case 1:
         printf("cond1 e adi��o");
         soma=valor1+valor2;
         printf("\n\nAdi��o %c:%f",20,soma);
         break;
         case 2:
              printf("cond2 e subtra��o");
              menos=valor2-valor1;
              printf("\n\nSubtra��o %c:%f",20,menos);
              if (valor1<=valor2)
              {
                menos=valor1-valor2;
                printf("\n\nsubtra��o%c:%f",20,menos);
                }
              break;
              case 3:
                   printf("cond3 e multiplica��o");
                   vezes=valor1*valor2;
                   printf("\n\nmultiplica��o %c:%f",20,vezes);
                   break;
                   case 4:
                        printf("cond4 e divis�o");
                        divisao=valor2/valor1;
                        printf("\n\ndivis�o %c:%f",20,divisao);
                        if (valor1<=valor2)
                        {
                        printf("erro");
                        }
                        break;
                        case 5:
                             printf("cond5 e resto");
                             if (valor2%valor1==0)
                             {
                             resto=valor2%valor1;
                             printf("\n\nresto %c:%f",20,resto);
                             }
                             else
                             {
                             resto=valor1%valor2;
                             printf("resto %C:%f",20,resto);
                             }
                             break;
                             case 6:
                                  printf("cond6 e elevado");
                                  elevado=valor1^valor2;
                                  printf("\n\nelevado %c:%f",20,elevado);
                                  break;
                                  }
                                  getch();
                                  }
