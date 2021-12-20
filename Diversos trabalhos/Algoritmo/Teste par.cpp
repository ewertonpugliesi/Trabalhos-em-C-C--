//Tendo o calculo da soma de n numeros dita elo usuario.
#include<stdio.h>
#include<conio.h>
main()
{
      int num,cont=1,qtd=0;
      float soma=0,media;
      do
      {
          printf("\nDigite um numero: ");
          scanf("%i",&num);
          if (num%2==0)
          {
          soma+=num;
          qtd++;
          }
          cont++;
          }
                  while (cont<=5);
       printf("A  soma dos numeros eh: %i",soma);
       media=soma/qtd;
       printf("\n\nA media eh:%f",media);
            getch();
            }
            
