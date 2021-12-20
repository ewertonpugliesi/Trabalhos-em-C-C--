//Calcule o valor de S.
#include<studio.h>
#include<conio.h>
main()
{
       int cont=1,N,S,res=0;
       do
       {
           printf("\nDigite um numero: ");
           scanf("%i",&N);
           if(cont%2==0)
           {
                        S=S-res;
                        }
                        else
                        {
                        S=S+res;
                        }
                        }
                        while(cont<=N);
    printf("\n%i",N);
    res=res+1/cont;
    printf("\n\nO valor da soma eh:%i",res);
    getch();
}      
