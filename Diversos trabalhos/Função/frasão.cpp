#include<stdio.h>
#include<conio.h>
      int cont=1,N;
      float num,soma=0;
      main()
      {
      printf("Digite  N: ");
      scanf("%i",&N);
      while (cont<=N)
      { 
            num=10/cont;
            if (cont%2==0)
            {
            soma=num;
            }
            else
            {
                soma+=num;
                }
                  
            printf("\n1/%i=%.4f",cont,num);
            cont++;
            }
            printf("\n\na soma dos 10 numeros eh:%.5f",soma);
            getch();
            }
