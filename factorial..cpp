#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n, factorial= 1;
    printf("Enter a number \n");
    scanf("%d",&n);
 
    while(n!=0){
        factorial = factorial * n--;
    }
 
    printf("Factorial of a number is: %d",factorial);
}