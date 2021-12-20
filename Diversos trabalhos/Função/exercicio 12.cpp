/*Tendo 3 notas calcule a media,tendo a opção de calculo pelo usuario.
Entre aritmetica,ponderada,harmonica.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int tipo;
    float N1,N2,N3,media;
    printf("Digite N1: ");
    scanf("%f",&N1);
    printf("\nDigite N2: ");
    scanf("%f",&N2);
    printf("Digite N3: ");
    scanf("%f",&N3);
    printf("Digite o tipo de calculo de 1 ate 3: ");
    scanf("%i",tipo); 
    switch (tipo)
    {
    case 1:
         printf("case1 eh aritmetica");
         media=(N1+N2+N3)/3;
         printf("\nA media aritmetica eh %c:%f",media);
         break;
    case 2:
         printf("case2 eh ponderada");
         media=(N1*3)+(N2*3)+(N3*4)/10;
         printf("\nA media ponderada eh %c:%f",media);
         break;
    case 3:
         printf("case3 eh harmonica");
         media=(3/((1/N1)+(1/N2)+(1/N3)));
         printf("\nA media harmonica eh %c:%f",media);
         break;
         }
         getch();
         }
         
         
         
