//A linha de maior soma.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{      
      int lin,col,mat[4][4],somal=0,maior=0;
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
   if(somal>maior)
   {
                  maior=somal;
                  }
                  if(lin==0)
                  {
                            maior=somal;
                            }
                            
          printf("Soma eh %i",somal);
}                  
getch();
}
