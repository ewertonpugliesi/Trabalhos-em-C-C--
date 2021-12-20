//mostrar a idade de uma pessoa em anos,meses e dias.
#include<stdio.h>
#include<conio.h>
int idade,dias,mes,ano;
main()
{
      printf("Escreva sua idade: ");
      scanf("%i",&idade);
      ano=idade/365;
      mes=idade*12;
      dias=idade*365;
      printf("\n\nSua idade em anos %c:%i",120,ano);
      printf("\nSua idade em meses %c:%2.i",120,mes);
      printf("\nSua idade em dias %c:%3.i",120,dias);
      getch();
      }
      
