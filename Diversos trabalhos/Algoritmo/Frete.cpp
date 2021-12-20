//Tendo o nome do cliente,nome do vendedor,numero de peças vendidas.
//Digite um codigo de 1 ate 8.
//Onde 1=sul e valor =1 acima de 100 valor =10%.
//2=norte v=1.1 e v1000=8%.
//3=leste v=1.15 e v100=7%.
//4=oeste v=1.20 e v100=11%.
//5=noroeste v=1.25 e v100=15%.
//6=sudeste v=1.30 e v100=12%.
//7=centro oeste v=1.40 e v100=18%.
//8=nordeste v=1.35 e v100=15%.
//Comissão=6.5%valor total de venda.
//lucro=vtv-custototal-comissão.
//custo por peça=7%.
//custo=cp*numero de peças vendidas.
//valor=custo+50%*custo.
#include<stdio.h>
#include<conio.h>
int main()
{
    int Cod;
    float frete,lucro,Cp,Pv,Ct,Vt,comissao;
    char nome[30],vendedor[30];
    printf("\n\nDigite nome do cliente: ");
    gets(nome);
     printf("\n\nDigite nome do vendedor: ");
    gets(vendedor);
    printf("\n\nDigite numero de peças vendidas: ");
    scanf("%f",&Pv);
    printf("\n\nDigite o codigo de 1 a 8: ");
     scanf("%i",&Cod);
                    Cp=7;
                    Ct=Cp*Pv;
                    Vt=Ct+0.5*Ct;
                    comissao=Vt*0.65;
                    lucro=Vt-Ct-comissao;
                    printf("\n\nNo lucro %c:%f",130,lucro); 
    switch(Cod)
    {
               case 1:
                    printf("\n\nCod1 e Região Sul\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.00*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.1*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
case 2:
                    printf("\n\nCod2 e Região Norte\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.10*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.8*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
case 3:
                    printf("\n\nCod3 e Região Leste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.15*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.7*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
    case 4:
                    printf("\n\nCod4 e Região Oeste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.20*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.11*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
    case 5:
                    printf("\n\nCod5 e Região Noroeste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.25*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.15*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
     case 6:
                    printf("\n\nCod6 e Região Sudeste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.30*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.12*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;          
        case 7:
                    printf("\n\nCod7 e Região Centro-Oeste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.40*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.18*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;
          case 8:
                    printf("\n\nCod8 e Região Nodeste\n");
                    if (Pv>=1,000)
                     {
                                     frete=1.35*Pv;
                     printf("\n\nNo frete %c:%f",130,frete);
                     }
                     else
                     {
                          frete=0.15*Pv;
                         printf("\n\nNofrete %c:%f",130,frete);
                         }
                         break;     
                         default:
                          printf("\n\nErro\n");
                          }
                          getch();
                          }                                                        
