/*Tendo 4 numeros mostre a media entre eles, soma o resto da divisão da soma por cada valor.*/
#include<stdio.h>
#include<conio.h>
main()
{
      int num1,num2,num3,num4,soma,res1,res2,res3,res4;
      float media;
      printf("Digite um numero: ");
      scanf("%i",&num1);
      printf("Digite um numero: ");
      scanf("%i",&num2);
      printf("Digite um numero: ");
      scanf("%i",&num3);
      printf("Digite umm numero: ");
      scanf("%i",&num4);
      soma=num1+num2+num3+num4;
      media=soma/4;
      res1=soma%num1;
      res2=soma%num2;
      res3=soma%num3;
      res4=soma%num4;
      printf("\nO valor da soma eh %c:%i",120,soma);
      printf("\nO valor da media eh %c:%f",120,media);
      printf("\nO valor do resto da soma/num1 eh %c:%i",120,res1);
      printf("\nO valor do resto da soma/num2 eh %c:%i",120,res2);
      printf("\nO valor do resto da soma/num3 eh %c:%i",120,res3);
      printf("\nO valor do resto da soma/num4 eh %c:%i",120,res4);
      getch();
      }
