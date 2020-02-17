#include<stdio.h>
#include<conio.h>

// This function prints substring of str[] between low and
// high indexes (both inclusive).
void substr(char str[], int low, int high)
{
	if (low<=high)
	{
		printf("%c", str[low]);
		substr(str, low+1, high);
	}
}

int main ()
{
	char str[] = "CProgramming";
	printf("\Given string is: %s",str);
	printf("\nOutput substring is: ");
	substr(str, 1, 3);
	getch();
}


