//Temdo tres elementos diga qual e o maior.
#include<stdio.h>
#include<conio.h>
main()
{
      int N1 ,N2, N3;
      printf("\n\nDigite o N1.....: ");
      scanf("%i",&N1);
      printf("\n\nDigite o N2.....: ");
      scanf("%i",&N2);
      printf("\n\nDigite o N3.....: ");
      scanf("%i",&N3);
      if ((N1>N2)&&(N2>N3))
      {
        printf("\n\nEscreva o N1:%i",N1);
        }
        else
        {
            if (N2>N3)
            {
            printf("\n\nEscreva o N2:%i",N2);
            }
          else
         {
             printf("\n\nEscreva o N3:%i",N3);
             }
             }
             getch();
             }                   
      
