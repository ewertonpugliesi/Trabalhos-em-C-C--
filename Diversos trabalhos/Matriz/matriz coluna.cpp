//Soma das colunas da matriz.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{      
int lin,col,mat[4][4],somac=0;
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
                    somac=somac+mat[lin][col];
                    }
                    }
                    printf("//nA soma eh %i",somac);
                    getch();
                    }
