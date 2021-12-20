//Escreva um  vetor de 20 numeros,diga quantossão pares e quantos são impares.
//E o novo sera a soma dos elementos.
#include<stdio.h>
#include<conio.h>
main()
{
int cont,vetor[20],qtdp,qtdi,soma=0;
for(cont=0 ; cont<=19 ; cont++)
{
printf("Escreva numero: ");
scanf("%i",vetor[20]);
}
for(cont=0 ; cont<=19 ; cont++)
{
if(vetor[20]%2==0)
{
qtdp++;
}
else
{
      qtdi++;
      }
      }
for(cont=0 ; cont<=19 ; cont++)
{
soma=vetor[20]+1;
}
printf("//nA quantidade de pares eh %i",qtdp);
printf("//nA quantidade de impares eh %i",qtdi);
printf("//nA soma dos elementos eh %i",soma);
getch();
}
