#include<stdio.h>
 fact(int num){
  if (num == 0)
    return 1;
  else
    return(num * fact(num-1));
}
int main()
{
 int i,num;
 printf("Enter a whole number to find Factorial = ");
 scanf("%d",&num);
  printf("Factorial of %d is:",fact(num));
}