# include <stdio.h>
int main()
{
 int a[20], i, n ;
 printf("Enter the limit : ") ;
 scanf("%d", &n) ;
 printf("\nEnter the elements :\n\n") ;
 for(i = 0 ; i < n ; i++)
  scanf("%d", &a[i]) ;
 printf("\nThe negative elements are :\n\n") ;
 for(i = 0 ; i < n ; i++)
 {
  if(a[i] < 0)
   printf("%d\t", a[i]) ;
 }
 return(0) ;
}
