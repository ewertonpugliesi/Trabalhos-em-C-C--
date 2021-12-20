//Tendo o nome,digite o anom atual e a idade.
//calcule a idade do filho mais velho,mais novo,data dde nascimento do mais velho e do mais novo.
#include<stdio.h>
#include<conio.h>
main()
{
      char Nome;
      int Anohj,IdadeN,NascN,Idad1,Idad2,Nasc1,Nasc2;
      printf("\n\nDigite o nome: ");
      scanf("%c",&Nome);
      printf("\n\nDigite ano atual: ");
      scanf("%i",&Anohj);
      printf("\n\nDigite idade: ");
      scanf("%i",&IdadeN);
      Idad1=IdadeN/2;
      Idad2=Idad1-1.5;
      Nasc2=Anohj-Idad2;
      Nasc1=Anohj-Idad1;
      NascN=Anohj-IdadeN;
      getch();
      }
