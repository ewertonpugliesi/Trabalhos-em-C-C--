//Tendo um vetor mostre o menor e o maior elemento.
#include<stdio.h>
#include<conio.h>
main()
{
int cont,vetor[10],menor=0,maior=0;
for(cont=0 ; cont<=9 ; cont++)
{
printf("Digite um numero: ");
scanf("%i",&vetor[10]);
}
for(cont=0 ; cont<=9 ; cont++)
{
if(vetor[10]>maior)
{
maior=vetor[10];
}
else
{
    menor=vetor[10];
}
printf("//nO maior numero eh %i",maior);
printf("//nO menor numero eh %i",menor);
}
getch();
}
