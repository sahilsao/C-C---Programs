/*Q29). Write a program to perform file operation using records.  */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
main()
{
FILE *fp,*ft;
char another,choice;
struct emp
{
	char name[40];
	int age,a;
	float bs;
};
struct emp e;
char empname[40];
long int recsize;
fp=fopen("EMP.DAT","wb+");
if(fp== NULL)
{
fp=fopen("EMP.DAT","rb+");
if (fp==NULL)
{
	puts ("cannot open file");
	exit(0);
}
}
recsize=sizeof(e);
while(1)
{
clrscr();
printf("\n \t FILE OPERATION");
printf("\n \t ************************");
printf("\n \n 1. add records");
printf("\n \t 2. List records");
printf("\n\t 3. Modify Records");
printf("\n\t 4. Delete record");
printf("\n\t 5. Exit");
printf("\n \t Enter your choice:");
fflush(stdin);
choice=getch();
switch( choice)
{
case'1':
fseek(fp,0, SEEK_END);
another='y';
while(another =='y')
{
printf("\nEnter name, age and basic sal.:");
scanf("%s%d%f",&e.name,&e.age,&e.bs);
fwrite(&e,recsize,1,fp);
printf("\nAdd another record(y/n):");
fflush(stdin);
another=getch();
}
break;
case '2':
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
printf("\n%s%d%f",e.name,e.age,e.bs);
getch();
break;
case'3':
another='y';
while(another=='y')
{
printf("\nEnter name of employee to modify:");
scanf("%s",empname);
rewind(fp);
while(fread(&e,recsize,1,fp)==1)
{
if(empname==0)
{
printf("\nEnter new name,age&bs");
scanf("%s%d%f",e.name,&e.age,&e.bs);
fseek(fp,-recsize,SEEK_CUR);
fwrite(&e,recsize,1,fp);
break;
}
}
printf("modify another record(y/n):");
fflush(stdin);
another=getche();
}
break;
case'4':
another='y';
while(another=='y')
{
printf("\n enter name of employee to delete:");
scanf("%s ", empname);
ft=fopen("TEMP.dat", "wb");
rewind(fp);
while(fread(&e, recsize, 1, fp)==1)
{
if (e. name!=0)
fwrite(&e, recsize, 1, ft) ;
}
fclose(fp);
fclose(ft);
unlink("EMP.dat");
rename("temp.dat", "emp.dat");
fp=fopen("emp.dat","rb+");
printf("delete another record(y/n):");
fflush(stdin);
another=getche();
}
break;
case'5':
fclose(fp);
exit(0);
}
}
}
