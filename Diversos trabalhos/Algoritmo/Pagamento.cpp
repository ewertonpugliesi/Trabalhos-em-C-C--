//Calcule o que deve ser pago por um produto.
//Tendo o seu preço normal escolhida condiçao de pagamento.
//Utilizando os codigos abaixo
//1=avista tem 20% de desconto.
//2=avista cheque tem 10¢ de desconto.
//3=avista cartão tem preço normal.
//4=em2vezes tem juros de 10%.
//5=em 3vezes tem juros de 20%.
//6=em 6 vezes tem juros de 30%.
//outros mostrar mensagem de erro.
#include<stdio.h>
#include<conio.h>
int main()
{
    int cod;
    float Preso,valor,pag;
    printf("\n\nDigite o valor do produto: ");
    scanf("%f",&valor);
    printf("\n\nDigite codigo de pagamento de 1 a 6: ");
   scanf("%i",&cod); 
    switch(cod)
    {
                 case 1:
                      printf("\n\ncod1 e Preço a vista");
                      Preso=valor-0.2*valor;
                 printf("\n\nNo Preço a vista %c:%f",30,Preso);
                      break;
                 case 2:
                      printf("\n\ncod2 e Preço cheque");
                           Preso=valor-0.1*valor;
                      printf("\n\ncod2 e Preço cheque %c:%f",30,Preso);
                      break;
                 case 3:
                      printf("\n\ncod3 e cartão");
                      Preso=valor;
                      printf("\n\ncod3 e Preço cartão %c:%f",30,Preso);
                      break;
                 case 4:
                      printf("\n\ncod4 e 2vezes");
                      Preso=(valor+0.1*valor)/2;
                      printf("\n\nNo Preço em 2 vezes %c:%f",30,Preso);
                      break;
                 case 5:
                      printf("\n\ncod5 e 3vezes");
                      Preso=(valor+0.2*valor)/3;
                      printf("\n\nNo Preço em 3 vezes %c:%f",30,Preso);
                      break;
                 case 6:
                      printf("\n\ncod6 e 6vezes");
                      Preso=(valor+0.3*valor)/6;
                      printf("\n\nNo Preço em 6 vezes %c:%f",30,Preso);
                      break;
                      default:
                              printf("\n\nErrado");
                              }
                              getch();
                              }
