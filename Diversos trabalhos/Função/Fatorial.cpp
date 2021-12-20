//Calculo o valor fatorial de um numero.
#include<stdio.h>
#include<conio.h>
main()
{
      int cont=1,num,fat=1;
      printf("\n\nEscreva um numero: ");
      scanf("%d",&num);
      while(cont<=num)
      {
                      fat=fat*cont;
cont++;
}
printf("\n\nO fatorial do numero %d eh igual %d",num,fat );
getch();
}
