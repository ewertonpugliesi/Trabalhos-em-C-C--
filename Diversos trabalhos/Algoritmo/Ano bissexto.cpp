#include<stdio.h>
#include<conio.h>
main()
{
  int ano;
  printf("\nDigite um ano: ");
  scanf("%i",&ano);
  if ((ano%4==0)&&(ano%100!=0)||(ano%400==0))
  {
  printf("\nAno Bissexto");
}
else
{ 
    printf("\nNão é Bissexto");
}
getch();
}
