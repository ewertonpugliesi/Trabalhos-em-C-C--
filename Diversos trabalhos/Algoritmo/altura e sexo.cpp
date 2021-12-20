//Tendo 15 pessoas a altura o sexo.
//Calcule a menor altura,numero de homens,sexo da pessoa mais alta,media da altura das mulheres.
#include<stdio.h>
#include<conio.h>
main()
{
      char Sexo;
      float nh=0,qtdf=0,soma=0,maior=0,menor=10000,alt,spa,media;
      while (alt=!0)
      {
            printf("Digite o Sexo: ");
            scanf("%s",Sexo);
            printf("Digite a altura: ");
            scanf("%f",&alt);
            if ((Sexo=='M')||(Sexo=='m'))
            {
            soma=soma+alt;
            nh++;
            if (alt>maior)
            {
            maior=alt;
            }
            else
            {
            if(alt<menor)
            {
            menor=alt;
            }
            }
            }
            else
            {
            if((Sexo=='F')||(Sexo=='f'))
            {
            soma=soma+alt;
            qtdf++;
            if(alt>maior)
            {
            maior=alt;
            }
            }
            if (alt<menor)
            {
            menor=alt;
            }
            }
            }
            media=soma/qtdf;
            printf("\nA media da altura feminina eh de:%f",media);
            printf("\nO menor altura eh de:%f",menor);
            printf("\nO numero de homens eh de:%f",nh);
            printf("\nA maior altura eh de:%f",maior);
            printf("\nO Sexo da maior pessoa eh de;%s",spa);
            getch();
            }
