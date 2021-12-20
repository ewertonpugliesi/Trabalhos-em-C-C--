//Escrever um novo vetor,atraves de dois outros,mutiplicando valores de mesmo indice,
#include<stdio.h>
#include<conio.h>
main()
{
int cont,num[10],num2[10],resul[10];
for (cont=0 ; cont<=9 ; cont++)
{
printf("Digite um valor ");
scanf("%i",&num[10]);
}
for(cont=0; cont<=9 ; cont++)
{
printf("Digite um outro valor ");
scanf("%i",&num2[10]);
}
for(cont=0 ; cont<=9 ; cont++)
{
resul[10]=num[cont]*num2[cont];
printf("%i",&resul);
}
getch();
}
