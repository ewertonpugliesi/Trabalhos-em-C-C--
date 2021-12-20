#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
  float a,b,c,delta,x1,x2;
  printf("\nDigite valor de a: ");
  scanf("%f",&a);
  printf("\nDigite valor de b: ");
  scanf("%f",&b);
  printf("\nDigite valor de c: ");
  scanf("%f",&c);
  printf("%.2fx2%.2fx%2f=0",a,b,c);
  delta=pow(b,2)-(4*a*c);
  if (delta<0)
  {
  printf("\nNão eh possivel calculo");
}
else
{
    if (delta==0)
    {
    x1=-b/(2*a);
    printf("\nUma unica raiz real e o seu valor eh %.2f",x1);
}
else
{
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("\n\nx1=%.2f e x2=%.2f",x1,x2);
}
}
getch();
}
