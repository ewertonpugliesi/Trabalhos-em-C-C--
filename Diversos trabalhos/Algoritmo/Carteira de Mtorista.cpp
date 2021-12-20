//Ler o tipo de carta de motorista informando sua categoria de A ate E.
#include<stdio.h>
#include<conio.h>
int main()
{
    char cart;
    printf("Digite um tipo de carta de A a E: ");
    scanf("%c",&cart);
    switch(cart)
    {
                case 1:
                     printf("\n\nCartA:Duas ou tres rodas com ou sem carro lateral\n");
                   break;
                   case 2:
                        printf("\n\nCartB:Carros de passeioe outros veiculos de menor de 3,500kg, e 8 pessoas exvluindo o motorista\n");
                        break;
                  case 3:
                       printf("\n\nCartC:Caminhões e veiculos de carga com peso superior de 3,5Toneladas\n");
                       break;
                  case 4:
                       printf("\n\nCartD:Onibus e veiculosmde passageiro\n");
                       break;
                  case 5:
                      printf("\n\nCartE:Veiculos articulados co reboque e semi-reboque,cujo peso seja maior de que 6 toneladas,de lotação ultrapasse8 lugaresexcluindo motorista sendo para puxar Triles e afins\n");
                      break;
                     default:
                             printf("\n\n Erro\n");
                             }
                             getch();
                             }  
                       
