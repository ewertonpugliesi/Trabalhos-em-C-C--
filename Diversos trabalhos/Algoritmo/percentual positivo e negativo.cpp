//Tendo um  numero não determinado de valores,calcule sua media.
//Quantos são positivos,quantos negativos e o percentual de valores positivos e negativos.
#include<stdio.h>
#include<conio.h>
main()
{
      int num;
       float qtdp,qtdn,media,perctp,perctn,qtd=1,soma=0;
       while (qtd>=num);
       {
       printf("Digite um numero: ");
       scanf("%i",&num);
       if(num%2==0)
       {
       soma=soma+1;
       qtdp++;
       }
       else
       {
       soma=soma+1;
        qtdn++;
        }
        }
        qtd++;
        media=soma/qtd;
        perctp=qtdp/qtdn*100;
        perctn=qtdn/qtdp*100;
        printf("\nA quantidade de positivos eh %c:%f",120,qtdp);
        printf("\nA quantidade de negativos eh %c:%f",120,qtdn);
        printf("\nA media eh %c:%f",100,media);
        printf("\nO percentual positivo eh %c:%f",100,perctp);
        printf("\nO percentual negativo eh %c:%f",100,perctn);
        getch();
        }
