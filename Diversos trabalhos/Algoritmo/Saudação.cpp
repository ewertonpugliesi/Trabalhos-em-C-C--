//Fa�a uma sauda��o em caso seja uma mulher.
#include<stdio.h>
#include<conio.h>
main()
{
      char Sexo,Nome[30];
      int Idade;
      printf("\n Digite um nome.....: ");
      gets(Nome);
      printf("\n Digite o sexo.....: ");
      scanf("%c",&Sexo);
      printf("\n Digite a Idade.....: ");
      scanf("%i",&Idade);
      if((Sexo=='F')||(Sexo=='f'))
      {
      printf("\n Ola %s voc� eh mulher",Nome);
      }
      else 
      {
           printf("\n N�o mostrar imagem");
      }
      getch();
      }
