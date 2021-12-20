#include<stdio.h>
#include<conio.h>
main()
{
      //variaveis de calculo do salario liquido
      float Nome,Salario,INSS,Hora,Bruto,Liquido;
      char nome[30];
      printf("Digite Nome......");//Não utilizar '&' na leitura
      scanf("%s",Nome);
      printf("Digite Salario.......");
      scanf("%f",&Salario);
      printf("Digite Hora......");
      scanf("%d",&Hora);
      printf("Digite INSS.....");
      scanf("%f",&INSS);
      Bruto=Hora*Salario;
      INSS=9.5/100*Bruto;
      Liquido=Bruto-INSS;
      printf("\n\nO VALOR DO SALARIO LIQUIDO %c : %.2f", 130, Liquido);
      getch();
      }
