//Tendo tipo de combustivel entre alcool,gasolina e disel.
//Seu preço sendo de cada um alcool=1.7997,disel=0.9798 e gasolina=2.1009.
//Apresente cada um com o tipo selecionado como A=alcool,D=disel,e G=gasolina.
//Apresente o valor pago.
#include<stdio.h>
#include<conio.h>
main()
{
      float qtd,pago,Alcool,Gasolina,Disel,A,G,D;
      char tipo;
      printf("Digite a quantidade de combutivel: ");
      scanf("%f",&qtd);
      printf("Digite o tipo de combustivel comprado: ");
      scanf("%s",&tipo);
      if (tipo='A')
      {
      pago=1.7997*qtd;
      printf("\nO valor pago de alcool eh de %f",pago);
      }
      else
      {
          if(tipo='G')
          {
          pago=2.1009*qtd;
          printf("\nO valor pago de gasolina eh de %f",pago);
          }
          else
          {
              if(tipo='D')
              {
              pago=0.9798*qtd;
              printf("\nO valor pago de disel eh de %f",pago);
              }
              }
              }
              getch();
              }
      
