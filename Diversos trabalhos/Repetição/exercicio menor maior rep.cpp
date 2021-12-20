//Escreva um numero diferente de zero,encontre o maior e menor deles.
//Deve parar quando digitado zero,diga quantos numeros tem.
#include<stdio.h>
#include<conio.h>
main()
{
int cont=1,num1,num2,aux,maior,menor;
do
{
    printf("Digite um numero ");
    scanf("%i",&num1);
    printf("/n/nDigite um outro numero ");
    scanf("%i",&num2);
    if(num1>num2)
    {
    maior=num1;
    num1=aux;
    aux=maior;
}
else
{
    menor=num2;
    num2=aux;
    aux=menor;
}
}
    while(num1!=0&&num2!=0);
    printf("/n/nO maior numero eh:%1",maior);
    printf("/n/nO menor numero eh:%i",menor);
   getch();
} 
    
                           
