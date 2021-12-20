//Soma da diagonal principal da matriz.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{      
int lin,col,mat[4][4],somad=0;
for (lin=0  ; lin<3 ; lin++)
{
    for(col=0 ; col<3 ; col++)
    {
    printf("mat[%i][%i]=",lin,col);
    scanf("%i",&mat[lin][col]);
}
}
for(lin=0 ; lin<3 ; lin++)
{
          for(col=0 ; col<3 ; col++)
          {
          printf("mat[%i][%i]=",lin,col);
          scanf("%i",&mat[lin][col]);
          }
          "//n";
          }
for(lin=0 ; lin<3 ; lin++)
{
          for(col=0 ; col<3 ; col++)
          {
                    if (lin=col)
                    {
                    somad=somad+mat[lin][col];
                    }
                    }
                    }
                    printf("//nA soma eh %i",somad);
                    getch();
                    }
