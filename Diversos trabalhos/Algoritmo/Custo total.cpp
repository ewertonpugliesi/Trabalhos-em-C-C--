//Tendo os lados de uma caixa calcule a area,tinta consumida,rpolos usados e custo de mão de obra.
//Calcule com estes dados o custo total.
#include<stdio.h>
#include<conio.h>
main()
{
      int A1,A2,A3,Area,Tinta,Rolo;
      float Custo,Material,Obra,preso;
      printf("\n\nDigite lado 1 (em cm): ");
      scanf("%f",&A1); 
      printf("\n\nDigite lado 2 (em cm): ");
      scanf("%f",&A2);
      printf("\n\nDigite o lado 3 (em cm): ");
     Area=((2*(A1*A2))+(2*(A1*A3))+(2*(A2*A3)));
     Tinta=(Area*3);
     Obra=(Area*20);
     if (Tinta%5==0)
     {
     preso=(Tinta/5)*45;
     }
     else
     {
         preso=(Tinta/5)*45+45;
         }
         if (Area%10==0)
         {
     Rolo=(Area/10)*5;
     }
     else
     {
         Rolo=(Area/10)*5+5;
         }
         Material=Rolo+preso;
         Custo=Material+Obra;
         printf("\n\nQuantidaade de tinta eh de:%i",Tinta);
         printf("\n\nCusto de tinta eh de:%.2f",preso);
         printf("\n\nCusto de rolo eh de:%i",Rolo);
         printf("\n\nCusto de material eh de:%.2f",Material);
         printf("\n\nCusto de mao de obra eh de:%.2f",Obra);
         printf("\n\nCusto total eh de:%.2f",Custo);
     getch();
     }
      
     
