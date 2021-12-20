/*Tendo a nota de tres alunos  da N1 e N2 e seus nomes.
Ao final mostre  o nome do aluno que obteve a maior media.*/
#include<stdio.h>
#include<conio.h>
 main()
{
      float N11,N12,N21,N22,N31,N32,med1,med2,med3,maior;
      char nome1[30],nome2[30],nome3[30];
      printf("Digite o nome1: ");
      scanf("%s",nome1);
      printf("\nDigite a N11: ");
      scanf("%f",N11);
      printf("\nDigite a N21: ");
      scanf("%f",&N21);
        printf("\nDigite o nome2: ");
      scanf("%s",nome2);
      printf("\nDigite a N12: ");
      scanf("%f",N21);
      printf("\nDigite a N22: ");
      scanf("%f",&N22);
        printf("\nDigite o nome3: ");
      scanf("%s",nome3);
      printf("\nDigite a N13: ");
      scanf("%f",N31);
      printf("\nDigite a N23: ");
      scanf("%f",&N32);
      med1=(N11+N21)/2;
      med2=(N21+N22)/2;
      med3=(N31+N32)/2;
      if((med1>med2)&&(med1>med3))
      {
      maior=med1;
      printf("\nO aluno de maior media eh: %f:%s",nome1);
       }
      else
      {
          if(med2>med3)
          {
          maior=med2;
          printf("\nO aluno de maior media eh: %f:%s",nome2);
                       }
      else
      {
          maior=med3;
          printf("\nO aluno de maior media eh: %f:%s",nome3);
      }
      }
      printf("\nA maior media eh %c:%f",maior );
      getch();
      }
