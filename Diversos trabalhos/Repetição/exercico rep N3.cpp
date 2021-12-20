//Escreva tres numeros e diga os numeros entre N1 e N2 divisiveis por N3.
#include<stdio.h>
#include<conio.h>
main()
{
 int N1,N2,N3,cont=1;
 printf("\nEscreva N1: ");
 scanf("%i",&N1);
  printf("\nEscreva N2: ");
 scanf("%i",N2);
  printf("\nEscreva N3: ");
 scanf("%i",&N3);
 do
 {
      if(cont%N3==0)
      {
       printf("\n\n%i",cont);
       }
       cont++;
       }
       while(cont<N2);
       getch();
       }          
