//Tendo 5 numeros dizer quantos são negativos,positivos,iguais a zero.
#include<stdio.h>
#include<conio.h>
main()
{
  int N1,N2,N3,N4,N5,Qtdzer=0,Qtdneg=0,Qtdpos=0;
  printf("\n\nDigite N1: ");
  scanf("%i",&N1);
   printf("\n\nDigite N2: ");
  scanf("%i",&N2);
   printf("\n\nDigite N3: ");
  scanf("%i",&N3);
   printf("\n\nDigite N4: ");
  scanf("%i",&N4);
   printf("\n\nDigite N5: ");
  scanf("%i",&N5);
if (N1=0)
{
Qtdzer++;
}
else
{
    if (N1<0)
    {
  Qtdneg++;
}
else
{
    if(N1>0)
    {
Qtdpos++;
}
else
{
     if (N2=0)
        {
        Qtdzer++; 
        }
        else 
        {
             if (N2<0)
             {
             Qtdneg++;
             }
             else
             {
                 if(N2>0)
                 {
                 Qtdpos++;
                 }
         else
         {        
        if (N3=0)
        {
        Qtdzer++; 
        }
        else 
        {
             if (N3<0)
             {
             Qtdneg++;
             } 
             else 
             {
                  if(N3>0)
                  {
             Qtdpos++;
             } 
             else 
             {
                  if(N4=0)
                  {
                  Qtdzer++;
                  }
                  else
                  {
                      if(N4<0)
                      {
                              Qtdneg++;
                              }
                  else
                  {                    
                  if(N4>0)
                  {
             Qtdpos++;
             }
             else
             {
             if (N5=0)
        {
        Qtdzer++; 
        }
        else 
        {
             if (N5<0)
             {
             Qtdneg++;
             } 
             else 
             {
                  if(N5>0)
                  {
             Qtdpos++; 
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
                      }
getch();
}                                             
