//Tendo tres numeros dizer se são pares ou impares.
//Se forem impares faça a mumtiplicação.
//Se forem pares faça a soma.
//Diga a mensagem de pares ou impares o seu valor e o tipo de conta feita.
#include<stdio.h>
#include<conio.h>
main()
{
 int N1,N2,N3,Valor;
 printf("\n\nDigite N1: ");
 scanf("%i",&N1); 
 printf("\n\nDigite N2: ");
 scanf("%i",&N2);
 printf("\n\nDigite N3: ");
 scanf("%i",&N3);
 if ((N1%2==0)&&(N2%2==0)&&(N3%2==0))
 {
 Valor=N1+N2+N3;
 printf("\n\nTodos Pares e valor %c:%i",120,Valor);
}
 else 
 {
 Valor=N1*N2*N3;
 printf("\n\nNumeros não pares e valor %c:%i",120,Valor);
}
getch();
}
 
 
  
