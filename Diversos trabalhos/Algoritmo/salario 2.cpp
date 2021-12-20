//Tendo o nome ,cargo,idade,horas trabalhadas,salariohora.
//Calcular salario bruto,reajuste,gratificação,desconto.
//Para descobrir o salario liquido.
#include<stdio.h>
#include<conio.h>
main()
{
      char Nome[30],Cargo[30];
      float Idade,Nhrtb,Salhr,Bruto,Reaj,Grat,Desc,Liq;
       printf("Digite Nome : ");
       gets(Nome);
       printf("Digite o Cargo: ");
       gets(Cargo);
       printf("Digite a Idade: ");
       scanf("%f",&Idade);
       printf("Digite Salario hora: ");
       scanf("%f",&Salhr);
       printf("Digite Numero de horas trabalhadas: ");
       scanf("%f",&Nhrtb);
       Bruto=Salhr*Nhrtb;
       Reaj=(Bruto*38/100)+Bruto;
       Grat=(Reaj*20/100)+Reaj;
       Desc=Reaj*15/100;
       Liq=Grat-Desc;
       printf("No valor do salario liquido %c:2%f",130,Liq);
       getch();
       } 
       
