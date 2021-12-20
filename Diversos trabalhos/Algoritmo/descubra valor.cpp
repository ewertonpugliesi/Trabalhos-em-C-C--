//Mostrar se um numero e par ou impar e calcular valor de S.
//Se par S sera valor=N++.
//Se impar S sera valor=++N.
//Mostrar valor e o numero N.
#include<stdio.h>
#include<conio.h>
main()
{
      int N,valor,par,impar;
      printf("Digite um numero: ");
      scanf("%i",&N);
      if (N%2==0)
      {
      printf("\nNumero eh par");
      valor=N++;
      printf("\nvalor eh %c:%i",120,valor);
      }
      else
      {
      printf("\nNumero eh impar");
      valor=++N;
      printf("\nvalor eh %c:%i",120,valor);
      }
      getch();
      }
