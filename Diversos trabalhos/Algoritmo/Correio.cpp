//Calcular o numero de celos de 3 e 5 centavos conforme taxa selecionada.
#include<stdio.h>
#include<conio.h>
main()
{
int s3=0,s5=0,taxa;
printf("Digite a taxa de envio: ");
scanf("%i",&taxa);
while(taxa%5!=0)
{
                s3++;
                taxa=taxa-3;
                }
                s5=taxa/5;
                printf("\n\nA quantidade de selos de 3 eh de :%i",s3);
                printf("\n\nA quantidade de selos de 5 eh de:%i",s5);
 getch();
}               
