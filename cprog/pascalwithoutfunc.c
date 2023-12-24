#include<stdio.h>

int factorial(int x){

    int fact=1,i;
    for(i=2;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;    
}

int combination(int n,int r)
{
    int ncr;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}    
    int main()
{
    int n=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf(" %d ",combination(i,j));
           
                      
        }
        printf("\n");
    }
return 0;
}