//Tendo as notas n1 e n2 determine a media obitida.
#include<stdio.h>
#include<conio.h>
main()
{
      char nome[30];
      float N1,N2,Media;
      printf("\n\nDigite o seu nome: ");
      scanf("%c",&nome);
      printf("\n\nDigite N1: ");
      scanf("%f",&N1);
      printf("\n\nDigite N2: ");
      scanf("%f",&N2);
      Media=(N1+N2)/2;
      printf("\n\n No Valor de media %c:%f",120,Media);
      getch();
      }
