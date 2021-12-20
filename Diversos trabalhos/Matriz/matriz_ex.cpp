#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() 
{
   int LIN, COL, MAT[3][3];
  
   //ENTRADA DOS DADOS 
   for (LIN = 0 ; LIN < 3 ; LIN++)
   {
     for (COL = 0 ; COL < 3 ; COL++)
     {
       printf("MAT[%i][%i] = ", LIN, COL);
       scanf("%i", &MAT[LIN][COL]);
     }
   }
   // PROCESSAMENTO DOS DADOS
   for (LIN = 0 ; LIN < 3 ; LIN++)
   {
     for (COL = 0 ; COL < 3 ; COL++)
     {
       MAT[LIN][COL] = MAT[LIN][COL] * 2;
     }
   }
  
   // SAÍDA DOS DADOS
   for (LIN = 0 ; LIN < 3 ; LIN++)
   {
     for (COL = 0 ; COL < 3 ; COL++)
     {
       printf("  %i", MAT[LIN][COL]);
     }
     printf("\n");
   }
   getch();
}
