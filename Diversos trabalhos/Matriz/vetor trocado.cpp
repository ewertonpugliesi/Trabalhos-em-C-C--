//Trocar os elementos impares pelos pares imediastamente posteiores.
#include<stdio.h>
#include<conio.h>
main()
{
int cont,vetor[35],aux;
 for(cont=0 ; cont<=34 ; cont++)
 {
 printf("Digite um numero: ");
 scanf("%i",&vetor[35]);
}
for(cont=0 ; cont<=34 ; cont++)
{
if(vetor[35]%2==0)
{
vetor[35]=aux;
aux=vetor[35]++;
vetor[35]+=vetor[35];
}
else
{
    vetor[35]=aux;
    aux=vetor[35]--;
    vetor[35]-=vetor[35];
}
printf("//nO vetor eh %i",vetor[35]);
}
getch();
}
