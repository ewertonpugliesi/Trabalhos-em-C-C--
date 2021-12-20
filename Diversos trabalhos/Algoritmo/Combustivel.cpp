//Escrever a quantiudade de combumtivel em litros,o tipo de combustivel comprado.
//O valor pago,sabendo que cada um tem valores diferentes.
//Sendo alcool=1.849,disel=1.497,gasolina=2.458,alcool aditivado=1.956,gasolina aditivada=2.635 e gas=0.853.
#include<stdio.h>
#include<conio.h>
int main()
{
    float Qtd,Valor;
    char tipo;
    printf("\n\n Digite a Quantidade em litros: \n");
    scanf("%f",&Qtd);
    switch(tipo)
    {
     case 1:
         Valor=Qtd*1.849;
    case 2:
         Valor=Qtd*1.497;
    case 3:
         Valor=Qtd*2.458;
     case 4:
          Valor=Qtd*1.956;
     case 5:
          Valor=Qtd*2.635;
     case 6:
          Valor=Qtd*0.893;
          printf("\n\nValor\n");
          break;
          default:
          printf("\n\n Valor incorreto\n");
          }
          getch();
          }
                                              
