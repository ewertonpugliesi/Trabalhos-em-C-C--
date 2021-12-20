#include<stdio.h>
#include<conio.h>
 main()
{
  int N;
  printf("\nDigite um numero");
  scanf("%1",&N);
  if ((N%2==0)&&(N%3==0)&&(N%5==0))
  {
  printf("\n%i eh divisivel por 2,3 ou 5",N);
}
else
{
    if ((N%3==0)&&(N%5==0))
    {
    printf("\n%i eh divisivel por 3 e 5",N);
}
else
{
    if ((N%2==0)&&(N%5==0))
    {
    printf("\n%i eh divisivel por 2 e 5",N);
}
else
{
    if ((N%2==0)&&(N%3==0))
    {
    printf("\n%i eh divisivel por 2 e 3",N);
}
else
{
    if (N%5==0)
    {
    printf("\n%i eh divisivel so por 5",N);
}
else
{
    if (N%3==0)
    {
    printf("\n%i eh divisivel so por 3",N );
}
else
{
    if (N%2==0)
    {
    printf("\n%i eh divisivel so por 2,",N);
}
else
{
    printf("\n %i Nao eh divisivel por 2,3 ou 5");
}
}
}
}
}
}
}
getch();
}
    
    
    
    
