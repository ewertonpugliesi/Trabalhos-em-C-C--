/*Faça um algoritmo que, tendo como dados de entrada o nome do funcionário, 
o salário hora e o número de horas trabalhadas, calcule e informe o salário 
líquido sabendo-se que:
• salário líquido = salário bruto - desconto do INSS.
• salário bruto = número de horas trabalhadas * salário hora;
• desconto do INSS = 9.5 % do salário bruto. */

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
