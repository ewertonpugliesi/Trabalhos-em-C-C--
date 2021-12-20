/*Tendo o salario de 3 pessoas diga o maior valor,e a diferença percentualpra o menor valor.*/
#include<stdio.h>
#include<conio.h>
main()
{
   float sal1,sal2,sal3,maior,menor,perc;
      printf("Digite o salario: ");
      scanf("%f",&sal1);
      printf("\nDigite o salario: ");
      scanf("%f",&sal2);
      printf("\n\nDigite um salario: ");
      scanf("%f",&sal3);
      if ((sal1>sal2)&&(sal1>sal3))
      {
      maior<sal1;
      }
      else
      {
          if (sal2>sal3)
          {
          maior<sal2;
          }
          else
          {
              maior<sal3;
              }
              }
              if((sal1<sal2)&&(sal1<sal3))
              {
              menor<sal1;
              }
              else
              {
                  if(sal2<sal3)
                  {
                  menor<sal2;
                  }
                  else
                  {
                      menor<sal3;
                      }
                      }
                      perc=menor/maior*100;
                      printf("\nO maior salario eh:%.5f",10,maior);
                      printf("\n\nA diferensa percentual eh:%.5f",10,perc);
                      getch();
                      }
                      
