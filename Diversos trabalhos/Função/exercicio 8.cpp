/*Ler dois valores,e efetue operações de adição,multiplicação,subtração,
representado o resultado obtido.*/
#include<stdio.h>
#include<conio.h>
 int main()
{
float num1,num2,res;
char oper[1];
printf("Digite um numero: ");
scanf("%f",&num1);
printf("Digite um outro numero: ");
scanf("%f",&num2);
printf("Digite o tipo de conta entre +,-,*: ");
scanf("%s",oper);
switch(oper[1])
{
case '+' :
res=num1+num2;
break;
case '-' :
res=num1-num2;
if (num1<=num2)
{
res=num1-num2;
printf("\nValor negativo");
}
break;
case '*' :
res=num1*num2;
break;
}
printf("\nA resposta eh %c:%f",20,res);
getch();
}
