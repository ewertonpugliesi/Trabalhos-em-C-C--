//Tendo numeros entre 1000 e 1999 diga quais são divisiveis por 11 e resto 5.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1000;
      while(cont<=1999)
      {
           if (cont%11==5)
           {
                 printf("\n\n %i",cont);
                 }
                 cont++;
                 }
                 getch();
                 }          
