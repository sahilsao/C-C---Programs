#include <stdio.h>
int factorial(int n){
//base case
if(n == 0){
return 1;
}else {
return (n * factorial(n-1));
}
}
int fibonacci(int n){
if(n == 0){
return 0;
}else if(n == 1){
return 1;
}else {
return (fibonacci(n-1) + fibonacci(n-2));
}
}
int main(){
int n,i;
printf("Enter the number: ");
scanf("%d",&n);
printf("\nFactorial of %d: %d\n" , n , factorial(n));
printf("Fibbonacci of %d: " , n);
for(i = 0;i<n;i++){
printf("%d ",fibonacci(i));
}
}
