//Ler o nome e as notas de um aluno e a media de suas notas.
#include<stdio.h>
#include<conio.h>
main()
{
       float n1,n2,media;
       char nome[30];
       printf("Digite seu nome: ");
       scanf("%s",nome);
       printf("\nDigite nota da n1: ");
       scanf("%f",&n1);
       printf("\nDigite a nota da n2: ");
       scanf("%f",&n2);
       media=(n1+n2)/2;
       printf("\n\nA media das notas eh de %c:%f",130,media);
       getch();
       }
