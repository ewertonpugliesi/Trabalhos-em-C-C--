/*Tendo a massa corporal cuja e calculada por imc=peso/altura^2.
Apresente o nome do paciente,faixa de risco e o seu peso.
imc<20 o risco abaixo do peso.
imc de 20 ate 25 o risco e normal.
imc de 25 ate 30 o risco e excesso de peso.
imc de 30 ate 35 o risco e obesidade.
imc>35 o risco e de obesidade morbida.
*/
#include<stdio.h>
#include<conio.h>
main()
{
      float peso,alt,imc;
      char nome[30],res='s';
      while(res=='s')
      {
      printf("Digite o nome: ");
      scanf("%s",&nome);
      printf("Digite o peso: ");
      scanf("%f",&peso);
      printf("Digite a altura: ");
      scanf("%f",&alt);
      imc=peso/(alt*alt);
      if (imc<20)
      {
      printf("\nO paciente %s tem imc=%.2f eh esta abaixo do peso",nome,imc);         
      }
      else
      {
          if (imc>=20&&imc<25)
          {
          printf("nO paciente %s tem imc=%.2f eh esta com peso normal",nome,imc);
          }
          else
          {
              if (imc>=25&&imc<30)
              {
          printf("nO paciente %s tem imc=%.2f eh esta gordo",nome,imc);
          }
          else
          {
              if (imc>=30&&imc<35)
              {
          printf("nO paciente %s tem imc=%.2f eh esta obeso",nome,imc);
          }
          else
          {
          if  (imc>35)
              {
          printf("nO paciente %s tem imc=%.2f eh esta com obsidade morbida",nome,imc);
          }
          }
          }
          }
          }
          printf("\nDeseja continuar?");
          scanf("%s",&res);
          }
          getch();
          }   
