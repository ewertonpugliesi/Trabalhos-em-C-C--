//Calcular as ntas da p1,p2 e ti,sendo p1=40%,p2=50%,ti=10%,calcule a media.
#include<stdio.h>
#include<conio.h>
main()
{
      float N1,N2,Ti,media;
       printf("\n\nDigite N1: ");
       scanf("%f",&N1);
        printf("\n\nDigite N2: ");
        scanf("%f",&N2);
         printf("\n\nDigite Ti: ");
         scanf("%f",Ti);
         media=(N1*0.4+N2*0.5+Ti*0.1)/5;
          printf("\n\nNo valor da media %c:3%f",130,media);
          getch();
          }
