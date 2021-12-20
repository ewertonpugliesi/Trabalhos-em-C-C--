//Tendo o nome ,departamento e salario,calcule o salario aumentado.
//sabendo que cada departamento seu respectivo aumento.
//Sendo Ti=10%,compras=15%,vendas=20%,engenharia=25%,outros=5%.
#include<stdio.h>
#include<conio.h>
main()
{
float sal,aumento;
char nome[30],dep[20],TI,Compras,Vendas,Engenharia,Outros;
printf("\n\nDigite o seu nome: ");
gets(nome);
printf("\n\nDigite departamento: ");
gets(dep);
printf("\n\nDigite Salario: ");
scanf("%f",&sal);
if (TI)
{
aumento=sal+(sal*0.1);
printf("\n\nEscreva aumento%c:%f",3,aumento);
}
else
{
    if (Compras)
    {
aumento=sal+(sal*0.15);
printf("\n\n Escreva aumento%c:%f",3,aumento);
}
else
{
    if(Vendas)
    {
aumento=sal+(sal*0.2);
printf("\n\n Escreva aumento%c:%f",3,aumento); 
}
else
{
    if (Engenharia)
    {
aumento=sal+(sal*0.25);
printf("\n\nEscreva aumento%c:%f",3,aumento); 
}
 else
 {
     if(Outros)
     {
 aumento=sal+(sal*0,05);
 printf("\n\nEscreva aumento%c:%f",3,aumento); 
}
}
}
}
}
getch();
}                                           
