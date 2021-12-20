//Calcule o H tendo um  numero inteiro qualquer,como ultimo termo de uma sequencia.
#include<stdio.h>
#include<conio.h>
float soma=0,num;
int cont=1,N;
main()
{
      printf("Digite um numero: ");
      scanf("%i",&N);
      while (cont<=N)
      {
            num=1.0/cont;
            if(cont%2==0)
            {
            soma=num;
            }
            else
            {
                soma+=num;
                }
            printf("\n\n1/%i=%.4f",cont,num);
            cont++;
            }
            printf("\n\nA soma dos 10 numeros eh de:%.5f",soma);
            getch();
            }
