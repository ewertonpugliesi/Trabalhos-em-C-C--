//ler um numero e calcule o seu fatorial usando For,Do,While.
//Calcular seu fatorial.
#include<stdio.h>
#include<conio.h>
main()
{
int cont=1,N,Fat=1;
printf("\n\nEscreva um numero: ");
scanf ("%i",&N);
     do 
     {
     printf("\n\n%i",cont);
              Fat=Fat*cont;
              printf("\n\n%i",Fat);
              cont++;
              }
       while(cont<=N);
       getch();
       }       
