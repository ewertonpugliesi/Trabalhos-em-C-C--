//I dentificar linha de maior soma da matiz.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{      
int maior=0,lin,col,mat[4][4],somal=0;
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
                    somal=somal+mat[lin][col];
                    }
                    if (somal>maior)
                    {
                    maior=somal;
                    }
                    if (lin=0)
                    {
                              maior=somal;
                              }
                    printf("//nA soma eh %i",somal);
                    }
                    getch();
                    }
