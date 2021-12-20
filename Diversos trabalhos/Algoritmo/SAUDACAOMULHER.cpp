//Tendo nome,idade,sexo,faça uma saudaçao para pessoas do sexo feminino.
#include <stdio.h>
#include <conio.h>
main ()
{
     char SEXO, NOME[30];
     int IDADE;
     printf("\nDigite o nome........: ");
     gets(NOME);
     printf("\nDigite o sexo........: ");
     scanf("%c",&SEXO);
     printf("\nDigite a idade.......: ");
     scanf("%i",&IDADE);

     if ((SEXO == 'F') || (SEXO == 'f'))
     {
        printf("\nOLA %s VOCE EH MULHER", NOME);
     }
     else
     {
        printf("\nNAO DEVERIA MOSTRAR MENSAGEM, MAS PARA TREINAR O ELSE EH BOM!!!");
     }
     getch();
}
