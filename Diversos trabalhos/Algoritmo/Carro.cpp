//Custo de um carro ao consumidor e dado por custoconsu=custofabrica+des.
//Sendo desc=28% e de imp=45%.
//Calcule o custo ao consumidor.
#include<stdio.h>
#include<conio.h>
main()
{
float custo,cons,imp,des,fab;
printf("Escreva o custo de fabrica: ");
scanf("%f",custo);
imp=custo*0.45;
fab=imp+custo;
des=fab*0.28;
cons=des+fab;
printf("\nO Custo ao consumidor eh de %c:%f",120,cons);
getch();
}
