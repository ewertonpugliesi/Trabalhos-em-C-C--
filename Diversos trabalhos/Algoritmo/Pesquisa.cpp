//Tendo uma pesquisa entre pessoas.
//Coletando os salarios,numeros de filhos e sexo.
//Calcule a media salarial feminina,menor salario,maior salario entre os homens,total de filhos na cidade.
#include<stdio.h>
#include<conio.h>
main()
{
 float qtdf=0,qtdm=0,soma=0,maior=0,menor=0,sal,nf,medf;
char sex;     
while(nf!=0)
{
printf("\n\nEscreva o numero de filhos ");
scanf("%f",&nf);
printf("\nEscreva o salario: ");
scanf("%f",sal);
printf("\nDigite o sexo: ");
scanf("%c",&sex);
if ((sex=='f')||(sex=='F'))
{
   soma=soma+sal;
   qtdf=qtdf+1;
}
else
{
if ((sex=='m')||(sex=='M'))
{
        if (sal>maior);
        {
           maior=sal;
           }
           }
    qtdf=qtdf+nf; 
}            
if (sal<menor)
{
menor=sal;
}
}
medf=soma/qtdm;
printf("\nA media salarial feminina eh de:%f",medf);
printf("\nO menor salario eh de:%i",menor);
printf("\nO maior salario entre os homens eh de:%f",maior);
printf("\nA quantidade de filhos da cidade eh de:%f",qtdf);
getch();
}
