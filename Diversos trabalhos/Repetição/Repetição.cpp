#include<stdio.h>
#include<conio.h>
main()
{
      int num=0,H=0,N;
      printf("\n\nDigite um numero maior que 10: ");
      scanf("%i",&N);
      while (num<=N)
      {  
            num++;
             H=H+num;
            printf("\n\n%i",H);
            }
            getch();
            }
