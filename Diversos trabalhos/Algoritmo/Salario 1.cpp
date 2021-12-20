//Tendo o salario,nome,inss,horas trabalhadas calcule o salario liquido.// 
#include<stdio.h>
#include<conio.h>
main()
{
       float Salho,Nhor,Sabrut,Inss,Saliq;
       char nome[30];
       printf("Digite Nome : ");
       gets(nome);
       printf("Digite Salario hora: ");
       scanf("%f",&Salho);
       printf("Digite Numero de horas trabalhadas: ");
       scanf("%f",&Nhor);
       Sabrut=Nhor*Salho;
       Inss=9.5/100*Sabrut;
       Saliq=Sabrut-Inss;
       printf("No valor do salario liquido %c:2%f",130,Saliq);
       getch();
       } 
