/*  Ler dois valores para as vari�veis A e B, efetuar a troca dos valores de 
forma que a vari�vel A passe a possuir o valor da vari�vel B e que a vari�vel B
passe a possuir o valor da vari�vel A. Apresentar os valores trocados.  */

#include<stdio.h>
#include<conio.h>

main()
{
  int A,B, AUX;
  
  printf("\nDIGITE O VALOR DE A : ");
  scanf("%i", &A);
  printf("\nDIGITE O VALOR DE B : ");
  scanf("%i", &B);

  AUX = A;
  A = B;
  B = AUX;
  
  printf("\nO VALOR TROCADO DE A %c : %i", 130, A);
  printf("\n\nO VALOR TROCADO DE B %c : %i", 130, B);

  getch();
}  
