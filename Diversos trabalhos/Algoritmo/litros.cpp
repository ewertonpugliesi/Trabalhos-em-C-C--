//Calcule a quantidade de combustivel usada para pecorrer certa distancia.
#include<stdio.h>
#include<conio.h>
main()
{
      float Distancia,QTD,Consumo;
      printf("\n\nEscreva a Distancia(em m).....: ");
      scanf("%f",&Distancia);
      printf("\n\nEscreva a QTD(em m por Litros)......: ");
      scanf("%f",&QTD);
      Consumo=Distancia/QTD;
      printf("\n\nO consumo encontrado %c : %2.f litros",120,Consumo);
      getch( );
      }
