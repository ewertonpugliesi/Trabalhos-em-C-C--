//Tendo o nome,sexo,altura.
//Calcule o peso ideal para homens=72.7*altura-58 e a massa=ph/1000.
//Para mulheres=62.1*altura-44.7 e a massa=pm/1000.
#include<stdio.h>
#include<conio.h>
main()
{
      float altura,ph,pm,Id,Idy;
      char nome[30],sexo;
      printf("\n\nDigite o nome: ");
      gets(nome);
      printf("\n\nDigite o sexo: ");
      scanf("%c",&sexo);
      printf("\n\nDigite a altura: ");
      scanf("%f",&altura);
      if ((sexo=='m')|| (sexo=='M'))
      {
      ph=72.7*altura-58.0;
      Id=ph/1,000;
      printf("\n\nO valor de Id em kg %c:%f",10,ph);
      }
      else
      {
      pm=62.1*altura-44.7;
      Idy=pm/1000;
      printf("\n\no valor de Id em Kg %c:%f",10,pm);
      }
      getch();
      }
