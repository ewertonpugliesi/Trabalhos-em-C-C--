#include<stdio.h>
#include<conio.h>
main()
{
  int N,Valor;
  printf("\n\nDigite N: ");
  scanf("%i",&N);
  if (N%2 == 0)
  {
  Valor=N++;
  printf("\n\nNo valor %c:%i",120,Valor);
}
else
{
    Valor=++N;
    printf("\n\nNo valor %c:%i",120,Valor);
}
getch();
}            
