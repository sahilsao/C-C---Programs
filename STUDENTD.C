#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,t,p;
	char n[20]="NUPUR";
	char c[20]="BCA";
        char r[10]="9";
        printf("Enter the marks:");
	scanf("%d %d %d",&m1,&m2,&m3);
	t=m1+m2+m3;
	p=t*100/300;
	printf("The name is:%s\n",n);
	printf("The class is:%s\n",c);
	printf("The roll no is:%s\n",r);
	printf("The Maths mark is:%d\n",m1);
	printf("The C mark is:%d\n",m2);
	printf("The PC mark is:%d\n",m3);
	printf("The total is:%d\n",t);
	printf("The percentage is:%d\n",p);
}