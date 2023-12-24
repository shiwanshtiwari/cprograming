#include<stdio.h>
int factorial(int n)
{
    
    if(n==1 || n==0)
    {
        return 1;   //recursion
    }
    return n*factorial(n-1);
}
int main()
{
    int n,fact;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is %d",n,fact);
}