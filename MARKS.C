#include<stdio.h>
#include<conio.h>
void main()
{
	int i,r,m1,m2,m3,t;
	float p;
	char n;
	char c;
	i=1;
	while(i<=10)
	{
		scanf("%s %s",&n,&c);
		printf("name:%s",n);
		printf("class:%s",c);
		scanf("%d %d %d %d",&r,&m1,&m2,&m3);
		printf("roll no.%d",r);
		printf("m1 %d",m1);
		printf("m2 %d",m2);
		printf("m3 %d",m3);
		t=m1+m2+m3;
		p=t/3;
		printf("percentage:%d",p);
		if(p>80)
		{
			printf("pass with A grade");
		}
		else if(p>60)
		{
			printf("pass with B grade");
		}
		else if(p>50)
		{
			printf("pass with C grade");
		}
		else if(p>40)
		{
			printf("pass with D grade");

		}
		else
		{
			printf("FAIL");
		}
		i++;
	}
}