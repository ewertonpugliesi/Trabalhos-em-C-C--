//Tendo o 1primeiro numero,a razão e o numero de elementos.
//Calcule o enessimo elemento,o produto de elementos.
#include<stdio.h>
#include<conio.h>
main()
{
  int Pn,R,a1,N;
  printf("\n\nDigite elemento 1: ");
  scanf("%i",&a1);
  printf("\n\nDigite razão: ");
  scanf("%i",&R);
  printf("\n\nDigite Nelementos: ");
  scanf("%i",&N);
  Pn=a1^N*R^(N*(N-1)/2);
  printf("\n\nNo valor de Pn %c:%i",20,Pn);
  getch();
}
  
