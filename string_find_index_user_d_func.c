
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp;
    char str[100];
    puts("enter string:");
    gets(str);
    char substr[20];
    puts("enter substrng:");
    gets(substr);

    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }
 
            if(substr[j]=='\0')
            {
                printf("The substring is present in given position %d in string\n",temp);
                getch();
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }

    if(temp==0)
        printf("The substring is not present in given string\n");

    getch();
}
