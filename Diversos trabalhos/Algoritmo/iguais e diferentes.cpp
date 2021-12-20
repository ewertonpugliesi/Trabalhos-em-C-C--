//Tendo dois numeros dizer se são iguais e diferentes.
//Se são diferentes diga qual o maior.
//Se são iguais ou diferentes dizendo qual o maior.
#include<stdio.h>
#include<conio.h>
main()
{
      int num1,num2,maior;
      printf("Digite um numero: ");
      scanf("%i",&num1);
      printf("\nDigite um outro numero: ");
      scanf("%i",&num2);
      if (num1==num2)
      {
      printf("\nSão iguais");
      }
      else
      {
          if ((num1>num2)||(num2>num1))
          {
          printf("\nSão diferentes");
          }
          if ((num1>num2)||(num2<num1))
          {
          printf("\nn1 eh o maior");
          }
          else
          {
           printf("\nN2 eh o maior");
           }
           }
           getch();
           }   
