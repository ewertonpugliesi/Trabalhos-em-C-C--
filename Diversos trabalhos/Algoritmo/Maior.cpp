#include<stdio.h>
#include<conio.h>
main()
{
      int N1,N2;
      printf("\n\nDigite N1: ");
      scanf("%i",&N1);
      printf("n\nDigite N2: ");
      scanf("%i",&N2);
      if (N1==N2)
      {
      printf("\n\nEscreva IGUAIS");
      }
      else
      {
      if((N1>N2)&&(N2<N1))
      {
       printf("\n\nEscreva Diferentes N1:%i",N1);
       }
       else
       {
      if((N2>N1)&&(N1<N2))
      {
       printf("\n\nEscreva Diferentes N2:%i",N2);    
       } 
       }
       }                     
      getch();
      }
