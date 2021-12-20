//Ler os nimeros de 1 ate 7,informando o dia da semana correspondente sendo o domingo=1.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Digite os dias da semana de 1a 7: ");
    scanf("%i",&num);
    switch(num)
    {
               case 1:
                    printf("\n\nO num1 e Domingo\n");
                    break;
               case 2:
                    printf("\n\nO num2 e segunda\n");
                    break;
               case 3:
                    printf("\n\nO num3 e terça\n");          
                     break;
              case 4:
                   printf("\n\nO num4 e Quarta\n");
                   break;
              case 5:
                   printf("\n\nO num5 e Quinta\n");
                   break;
              case 6:
                   printf("\n\nO num6 e Sexta\n");
                   break;
             case 7:
                 printf("\n\nO num7 e Sabado\n");
                 break;
                 default:
                         printf("\n\n Erro\n");                       
}
getch();
}
