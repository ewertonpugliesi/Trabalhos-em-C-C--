/*
Fa�a um algoritmo que, tendo como dados de entrada o primeiro elemento de um PG
(progress�o geom�trica), a raz�o e o n�mero n de elementos, calcule e informe:
� o en�simo elemento da PG;
� o produto de elementos desta PG, sabendo que: Pn = a1n * r (n*(n-1)/2)
em que: a1 � o primeiro elemento da PG;
Pn � o produto dos n-�simos elementos;
r � a raz�o da PG.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{

float A1, R, PN, N;

printf("\n\n\nDigite o valor do primeiro termo da PG.....: ");
scanf("%f",&A1);
printf("\nDigite o valor da razao da PG..................: ");
scanf("%f",&R);
printf("\nDigite o enesimo termo da PG...................: ");
scanf("%f",&N);
  
PN = pow(A1,N) * pow(R,(N*(N-1)/2));
printf("\n\nO %.0f termo da PG %c : %.2f", N, 130, PN);
getch();

}
