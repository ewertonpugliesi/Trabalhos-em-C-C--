/*
Escreva um algoritmo para calcular o volume de um objeto. O algoritmo deve ler 
a massa e a densidade do objeto. A massa ser� dada em gramas, a densidade ser� 
dada em gramas por cent�metros c�bicos. A rela��o entre a massa, densidade e 
volume de um objeto � dada por :   Densidade = Massa / Volume
Seu algoritmo deve escrever o resultado em cent�metros c�bicos.
*/
#include<stdio.h>
#include<conio.h>
main()
{

float MASSA, DENSIDADE, VOLUME;

printf("\n\n\nDigite a massa (em gr)........................: ");
scanf("%f",&MASSA);
printf("\nDigite a densidade (em gr por cm c�bicos).....: ");
scanf("%f",&DENSIDADE); 
VOLUME = MASSA / DENSIDADE;
printf("\n\nO volume encontrado %c : %.2f cm cubico", 130, VOLUME);
getch();

}
