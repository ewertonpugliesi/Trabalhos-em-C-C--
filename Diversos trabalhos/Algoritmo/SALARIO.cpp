/*Fa�a um algoritmo que, tendo como dados de entrada o nome do funcion�rio, 
o sal�rio hora e o n�mero de horas trabalhadas, calcule e informe o sal�rio 
l�quido sabendo-se que:
� sal�rio l�quido = sal�rio bruto - desconto do INSS.
� sal�rio bruto = n�mero de horas trabalhadas * sal�rio hora;
� desconto do INSS = 9.5 % do sal�rio bruto. */

#include<stdio.h>
#include<conio.h>

main()
{
  float HORASTRAB, SALHORA, SALBRU, SALIQ, INSS;
  
  printf("\nDIGITE O VALOR DO SALARIO HORA : ");
  scanf("%f", &SALHORA);
  printf("\nDIGITE A QUANTIDADE DE HORAS TRABALHADAS : ");
  scanf("%f", &HORASTRAB);

  SALBRU = SALHORA * HORASTRAB;
  INSS = SALBRU * 9.5 / 100;
  SALIQ = SALBRU - INSS;

  printf("\n\nO VALOR DO SALARIO LIQUIDO %c : %.2f", 130, SALIQ);

  getch();
}  
