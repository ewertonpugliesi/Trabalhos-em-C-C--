//Tendo um vetor de 20 posições,mostre depois troque o primeiro com o ultimo.
//Assim sucessivamente e mostre o novo vetor.
#include<stdio.h>
#include<conio.h>
main()
{
int cont,vetor[20],atual;
for(cont=0 ; cont<=19 ; cont++)
{
printf("Digite um numero: ");
scanf("%i",&vetor[20]);
}
for(cont=0 ; cont<=19 ; cont++)
{
vetor[20]=atual;
atual=vetor[20]+cont;
printf("//n %i",vetor[20]);
}
getch();
}
