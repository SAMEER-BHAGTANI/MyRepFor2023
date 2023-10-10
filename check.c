#include<iostream.h>
#include<conio.h>

void main()
{
  int a;

  clrscr();

  cout<<"\n\t\t\tEnter any number : ";
  cin>>a;

  a%2==0?cout<<"\n\t\t\tEven number":cout<<"\n\t\t\tOdd number";

  getch();
}
