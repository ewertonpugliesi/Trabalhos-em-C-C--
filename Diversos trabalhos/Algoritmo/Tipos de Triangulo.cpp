//Tendo 3 lados determine se formam triamgulos se formarem diga o tipo dele.
//Isoceles,Escaleno ou equilatero.
#include<stdio.h>
#include<conio.h>
main()
{
      int L1,L2,L3;
      printf("\n\nDigite L1: ");
      scanf("%i",&L1);
        printf("\n\nDigite L2: ");
      scanf("%i",&L2); 
       printf("\n\nDigite L3: ");
      scanf("%i",&L3);
      if ((L1<L2+L3)&&(L2<L1+L3)&&(L3<L1+L2))
      {                                  
            if((L1==L2)&&(L2==L3))
            {
            printf("\nTrianguloEquilatero");
            }
           else
           {
               if ((L1==L2)||(L2==L3)||(L3==L1))
               {
            printf("\nTrianguloIsoceles");
            }
            else
            {
            printf("\nTrianguloEscaleno");                                  
            }
            }
            }
            else
                {
                printf("\nValores nao formam um triangulo");
            }
            getch();
            }
            
      
