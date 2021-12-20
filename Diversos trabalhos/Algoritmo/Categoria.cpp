//Diga a categoria de um nadador pela sua idade.
#include<stdio.h>
#include<conio.h>
int main()
{
    int idade;
    printf("Digite uma idade: ");
    scanf("%i",&idade);
    switch(idade)
    {
                 case 1:
                 case 2:
                 case 3:
                 case 4:
                 printf("\n\n Categoria fraldinha\n");
                 break;
                 case 5:
                 case 6:
                 case 7:
                 case 8:
                 case 9:
                 case 10:
            printf("\n\n categoria infantil\n");
            break;
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
                 printf("\n\n Categoria juvenil\n");
                  break;
                  default:
                  printf("\n\n Categoria senior\n");
                  }
                  getch();
                  }                                                                                                           
