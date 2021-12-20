//Calcule o salario,tendo o nome do funcionario.
//Digitar salario hora,numero de horas trabalhadas,
//Calcular bruto,inss,desconto,imposto,
#include<stdio.h>
#include<conio.h>
main()
{
      char Nome[30];
      float Bruto,Liq,Inss,Desc,Ndep,Salho,Nhtrb,Dep,Imp;
      printf("Digite Nome : ");
      gets(Nome);
      printf("Digite Salario hora: ");
      scanf("%f",&Salho);
      printf("Digite numero de horas trabalhadas: ");
      scanf("%f",&Nhtrb);
      Salho=1.2*Nhtrb;
      Dep=40*Ndep;
      Bruto=Salho+Dep;
      Inss=Bruto*8.5/100;
      Imp=Bruto*5/100;
      Liq=Bruto-Inss-Imp;
      printf("No valor do salario liquido %c:3%f",130,Liq);
       getch();
       } 
      
