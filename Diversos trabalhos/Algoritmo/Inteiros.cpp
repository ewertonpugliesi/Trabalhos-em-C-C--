//Digite dois numeros inteiros e mostre entre eles numeros inteiros sem mostra os respctivos numeros.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,num1,num2;
      printf("Digite um numero: ");
      scanf("%i",&num1);
      printf("Digite um  outro numero: ");
      scanf("%i",&num2);
      while(cont<num2)
      {
      printf("\n\n%i",cont);
      cont++;
      }
      getch();
      }
