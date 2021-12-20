//Faça a sequencia de Fibonacciate determinado numero dito pelo usuario.
#include<stdio.h>
#include<conio.h>
main()
{
      int atual=1,anterior=0,proximo,cont,termo,passo1;
      printf("Escreva o numero de termos: ");
      scanf("%i",termo);
      for(cont=1 ; cont<=termo ; cont++)
      {
                 proximo=anterior+atual;
                 printf("/n/nO numero atual eh:%i",atual);
                 anterior=atual;
                 atual=proximo;
                 }
                 getch();
                 }
