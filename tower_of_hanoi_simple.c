#include <stdio.h>
int main()
{
	int num,x;
	printf("\nENTER NUMBER OF DISKS: ");
	scanf("%d",&num);
	for(x=1;x<(1<<num);x++)
	{
	printf("\nMOVE FROM PEG %d TO %d",(x&x-1)%3+1,((x|x-1)+1)%3+1);
	}
	printf("\n");
	return 0;
}
