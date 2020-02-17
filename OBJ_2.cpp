
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Pattern_a
{
  public:
     char rows,cols_l,cols_r,i;
     int blank,cnt_blank;
   public:
     void disp_for();
     void disp_while();
     void disp_dowhile();
};
void Pattern_a::disp_for()
{
      i='D';
     cnt_blank=-1;
     cout<<"\n\n\nPattern A with For loop.\n\n\n\n";
     for(rows='D';rows>='A';rows--)
     {
	for(cols_l='A';cols_l<=rows;cols_l++)
	    cout<<cols_l;
             for(blank=1;blank<=cnt_blank;blank++)
                cout<<" ";
             cnt_blank+=2;
             for(cols_r=i;cols_r<='G';cols_r++)
                if(cols_r!='D')
                cout<<cols_r;
             i++;
             cout<<endl;
       }
} 
void Pattern_a::disp_while()
{
i='D';
cnt_blank=-1;
cout<<"\n\n\nPattern A with while loop.\n\n\n\n";
rows='D';
while(rows>='A')
 {
      cols_l='A';
	while(cols_l<=rows)
        {
	  cout<<cols_l;
	  cols_l++;
	}
   blank=1;
   while(blank<=cnt_blank)
   {
      cout<<" ";
      blank++;
   }
   cnt_blank+=2;
   cols_r=i;
   while(cols_r<='G')
   {
      if(cols_r!='D')
      cout<<cols_r;
      cols_r++;
   }
      i++;
      cout<<endl;
   rows--;
 }
}
void Pattern_a::disp_dowhile()
{
i='D';
cnt_blank=-1;
cout<<"\n\n\nPattern A with Do While loop.\n\n\n\n";
rows='D';
do
   {
      cols_l='A';
	do
        {
	  cout<<cols_l;
	  cols_l++;
	}
   while(cols_l<=rows);
   blank=1;
   while(blank<=cnt_blank)
   {
      cout<<" ";
      blank++;
   }
   cnt_blank+=2;
   cols_r=i;
   do
   {
      if(cols_r!='D')
      cout<<cols_r;
      cols_r++;
   }
   while(cols_r<='G');
   i++;
   cout<<endl;
   rows--;
   }
   while(rows>='A');
}

class Pattern_b
{
     int i,j;
   public:
     void disp_for();
     void disp_while();
     void disp_dowhile();
};
void Pattern_b::disp_for()
{
cout<<"\n\n\nPattern B with for loop.\n\n\n\n";
  for(i=0;i<=3;i++)
  {
     for(j=0;j<=i;j++)
        cout<<j+1<<"  ";
     cout<<endl;
  }
}

void Pattern_b::disp_while()
{
  cout<<"\n\n\nPattern B with While loop.\n\n\n\n";
  i=0;
  while(i<=3)
  {
    j=0;
     while(j<=i)
     {
	cout<<j+1<<"  ";
        j++;
     }
     cout<<endl;
     i++;
  }
}

void Pattern_b::disp_dowhile()
{
  cout<<"\n\n\nPattern B with Do While loop.\n\n\n\n";
  i=0;
  do
	{
	j=0;
	do
	{
	cout<<j+1<<"  ";
	j++;
	}
	while(j<=i);
	cout<<endl;
	i++;
	}
	while(i<=3);
}
class Pattern_c
{
  int n,r,c,i,b,j;
   public:
     void disp_for();
     void disp_while();
     void disp_dowhile();
};
void Pattern_c::disp_for()
{
  cout<<"\n\n\nPattern C with for loop.\n\n\n\n";
  for(i=0;i<=2;i++)
  {
    for(b=1;b>=i;b--)
     cout<<" ";
    for(j=0;j<=i;j++)
     cout<<"*"<<" ";
    cout<<endl;
  }
}

void Pattern_c::disp_while()
{
cout<<"\n\n\nPattern C with While loop.\n\n\n\n";
r=0;
while(r<=2)
{
    b=2;
    while(b>r)
    {
       cout<<" ";
       b--;
    }
    c=0;
    while(c<=r)
    {
        cout<<"* ";
	c++;
    }
  cout<<endl;
  r++;
}
}

void Pattern_c::disp_dowhile()
{
cout<<"\n\n\nPattern C with Do While loop.\n\n\n\n";
r=0;
do
{
    b=2;
    do
    {
       cout<<" ";
       b--;
    }
    while(b>=r);
    c=0;
    do
    {
      cout<<"* ";
      c++;
    }
    while(c<=r);
  cout<<endl;
  r++;
}
while(r<=2);
}
class Pattern_d
{
   public:
     int r,c,n[6][6];
   public:
     void disp_for();
     void disp_while();
     void disp_dowhile();
};
void Pattern_d::disp_for()
{
cout<<"\n\n\nPattern D with For loop.\n\n\n\n";
 for(r=0;r<=4;r++)
 {
   for(c=0;c<=r;c++)
   {
     if(c==0||c==r)
       n[r][c]=1;
     else
       n[r][c]=n[r-1][c-1]+n[r-1][c];
    cout<<n[r][c]<<"  ";
   }
   cout<<endl<<endl;
 }
}

void Pattern_d::disp_while()
{
cout<<"\n\n\nPattern D with While loop.\n\n\n\n";
r=0;
 while(r<=4)
 {
   c=0;
     while(c<=r)
   {
     if(c==0||c==r)
       n[r][c]=1;
     else
       n[r][c]=n[r-1][c-1]+n[r-1][c];
     cout<<n[r][c]<<"  ";
     c++;
   }
   cout<<endl<<endl;
   r++;
 }
}
void Pattern_d::disp_dowhile()
{
cout<<"\n\n\nPattern D with Do-while loop.\n\n\n";
r=0;
 do
 {
   c=0;
   do
   {
     if(c==0||c==r)
       n[r][c]=1;
     else
       n[r][c]=n[r-1][c-1]+n[r-1][c];
    cout<<n[r][c]<<"  ";
    c++;
   }
   while(c<=r);
   cout<<endl<<endl;
   r++;
 }
 while(r<=4);
}
void main()
{
int g;
char s;
MENU:
clrscr();
Pattern_a a;
Pattern_b b;
Pattern_c c;
Pattern_d d;
cout<<"\n__________MENU___________"<<endl<<endl<<endl<<endl;
cout<<"11.Pattern A with For loop"<<endl;
cout<<"12.Pattern A with While loop"<<endl;
cout<<"13.Pattern A with Do-While loop"<<endl<<endl;
cout<<"21.Pattern B with For loop"<<endl;
cout<<"22.Pattern B with While loop"<<endl;
cout<<"23.Pattern B with Do-While loop"<<endl<<endl;
cout<<"31.Pattern C with For loop"<<endl;
cout<<"32.Pattern C with While loop"<<endl;
cout<<"33.Pattern C with Do-While loop"<<endl<<endl;
cout<<"41.Pattern D with For loop"<<endl;
cout<<"42.Pattern D with While loop"<<endl;
cout<<"43.Pattern D with Do-While loop"<<endl<<endl<<endl;
cout<<"44.Exit.\n";
cout<<"Enter your choice : ";
cin>>g;
switch(g)
{
   case 11:
	a.disp_for();
	break;
   case 12:
	a.disp_while();
	break;
   case 13:
	a.disp_dowhile();
	break;
   case 21:
	b.disp_for();
	break;
   case 22:
	b.disp_while();
	break;
   case 23:
	b.disp_dowhile();
	break;
   case 31:
	c.disp_for();
	break;
   case 32:
	c.disp_while();
	break;
   case 33:
	c.disp_dowhile();
	break;
   case 41:
	d.disp_for();
	break;
   case 42:
	d.disp_while();
	break;
   case 43:
	d.disp_dowhile();
	break;
   case 44:
        exit(0);
   default:
	cout<<"Invalid entry ! Try again....";
}
getch();
goto MENU;
}
