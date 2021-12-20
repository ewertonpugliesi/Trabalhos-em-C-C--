//Ler uma letra,numero inteiro,numero com casas decimais,string.
//Apresente eles em linhas diferentes e depois tudo junto.
#include<stdio.h>
#include<conio.h>
main()
{
int num;
float decimal;
char letra,cara;
      printf("Digite um numero inteiro: ");
      scanf("%i",&num);
      printf("\nDigite um numero decimal: ");
      scanf("%f",&decimal);
      printf("\nDigite uma letra: ");
      scanf("%c",&letra);
      printf("\nDigite um caracter: ");
      scanf("%s",cara);
      printf("\n\n\nO numero%i e decimal%f aparece com a letra%c e caracter%s",num,decimal,letra,cara);
      getch();
      }
      
