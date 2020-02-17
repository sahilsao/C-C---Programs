#include<stdio.h>
#include<conio.h>
    void main()
    {
        char a[50],b[50];
        int i,j,n,k;
        clrscr();
        printf("\n Please Give The STRING OF A : ");
        scanf("%s",a);
        printf("\n Please Give The STRING OF B : ");
        scanf("%s",b);

        for(i=0;b[i]!='\0';i++)
            a[i]=b[i];
        a[i]='\0';
        printf("\n AFTER COPYING STRING B INTO A IS  %s ",a);
        getch();
    }