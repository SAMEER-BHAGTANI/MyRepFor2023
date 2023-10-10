#include<stdio.h>
#include<conio.h>

void main()
{
  int a;

  clrscr();

  printf("\n\t\t\tEnter any number : ");
  scanf("%d",&a);

  if(a>0)
  {
    printf("\n\t\t\tPositive Number");
  }
  else if(a<0)
  {
    printf("\n\t\t\tNegative number");
  }
  else
  {
    printf("\n\t\t\tZero");
  }
}
