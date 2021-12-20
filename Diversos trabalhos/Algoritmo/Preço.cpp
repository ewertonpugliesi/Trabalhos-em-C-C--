#include<stdio.h>
#include<conio.h>
main()
{
      float Qtd,Qtda,Qtds,Qtdg,A,D,G;
      char ALCOOL,DIESEL,GASOLINA,Combustivel;
      printf("\n\nDigite o combustivel: ");
      scanf("%c",&Combustivel);
      printf("\n\nDigite  a Quantidade em litros: ");
      scanf("%f",&Qtd);
      if (Combustivel==ALCOOL)
      {
        A=Qtda*1.7997;
         printf("\n\nO valor de A %c:2%f",120,A);
         }
         else
         {
         if(Combustivel==DIESEL)
          {
            D=Qtds*0.9978;
             printf("\n\nO valor de D %c:3%f",120,D);
             }
                else
                 {
                  if (Combustivel==GASOLINA)
                    {
                     G=Qtdg*2.1009;
                     printf("\n\nO valor de G %c:3f",120,G);
                     }
                     }
                     }
                     getch();
                     }               
                                                  
      
