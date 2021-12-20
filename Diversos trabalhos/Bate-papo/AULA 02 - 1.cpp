/*
Escreva um algoritmo para calcular o volume de um objeto. O algoritmo deve ler 
a massa e a densidade do objeto. A massa será dada em gramas, a densidade será 
dada em gramas por centímetros cúbicos. A relação entre a massa, densidade e 
volume de um objeto é dada por :   Densidade = Massa / Volume
Seu algoritmo deve escrever o resultado em centímetros cúbicos.
*/
#include<stdio.h>
#include<conio.h>
main()
{

float MASSA, DENSIDADE, VOLUME;

printf("\n\n\nDigite a massa (em gr)........................: ");
scanf("%f",&MASSA);
printf("\nDigite a densidade (em gr por cm cúbicos).....: ");
scanf("%f",&DENSIDADE); 
VOLUME = MASSA / DENSIDADE;
printf("\n\nO volume encontrado %c : %.2f cm cubico", 130, VOLUME);
getch();

}
