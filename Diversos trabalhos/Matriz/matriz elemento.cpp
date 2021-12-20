//Maior elemento da matriz,e de sua localização.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{      
int maior=0,lin,col,mat[4][4],soma=0,maiorl=0,maiorc=0;
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
                    soma=soma+mat[lin][col];
                    }
                    if(soma>maior)
                    {
                    maior=soma;
                    maiorl=lin;
                    maiorc=col;
                    }
                    if (lin=0)
                    {
                    maior=soma;
                    maiorl=lin;
                    maiorc=col;
                    }
                    printf("//nA soma eh %i",soma);
                    printf("//nA maior linha eh %i",maiorl);
                    printf("//nA maior coluna eh %i",maiorc);
                    }
                    getch();
                    }
