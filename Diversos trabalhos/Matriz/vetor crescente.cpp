//Tendo um vetor de 10 posiçoes mostre ordenado em ordem crescente.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont,vetor[10],vetor2[10];
      for(cont=0 ; cont<=9 ; cont++)
      {
      printf("Escreva um numero: ");
      scanf("%i",&vetor[10]);
      printf("Digite um outro numero: ");
      scanf("%i",&vetor2[10]);
      }
      for(cont=0 ; cont<=9 ; cont++)
      {
      if(vetor[10]>vetor2[10])
      {
      maior=vetor[10];
      vetor=maior;
      }
      printf("//nO vetor eh %i",vetor[10]);
      }
      getch();
      }
      
