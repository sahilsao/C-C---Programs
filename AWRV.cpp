#include<iostream.h>
#include<conio.h>
 int sum(int a, int b)
 {
  int result;
  result =a+b;
  return(result);
 }
   void main()
   {
    int i,j,add;
    cout<<"enter the two no.s ";
    cin>>i>>j;
    add=sum(i,j);
    cout<<"sum of the two no.s ="<<add;
    getch();
   } 

