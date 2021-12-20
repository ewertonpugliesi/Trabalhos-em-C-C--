//calcule e mostre os termos de uma sequencia e o valor de x.
//Sendo assim; x=1000/1+997/3+994/5+991/7+...+N.
#include<stdio.h>
#include<conio.h>
float soma=0,num;
int X=1000,cont=1,N;
main()
{      
      printf("Digite um numero: ");
      scanf("%i",&N);
      while (cont<=N)
      {
        num=X/cont;
        X=X-3;
        soma=soma+X;
      printf("\n%i/%i=%4.f",X,cont,num);
      cont=cont+2;
      }
      printf("\n\nA Soma dos numeros eh de:%.5f",soma);
      getch();
      }
