#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,N,H=1,res=1,par,impar;
      printf("Digite N: ");
      scanf("%i",&N);
      while (cont<=N)
      { 
            printf("\n\n%i",res);
           if (cont=par)
            {
                          H=H-res;
                          }
                          else
                          {
                              if(cont=impar)
                              { 
                                             H=H+res;
                                             }
                                             }
                                             printf("%i",cont);
                                             res=res+1/cont;
                                             cont++;
                                             }
                                             printf("\n\n%i",&H);
                                             getch();
                                             }
