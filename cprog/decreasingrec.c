#include<stdio.h>
int decreasing(int n)
{
    if(n==1)
    {
        printf("%d",n);
        return n;
    }
    else
    {
        printf("%d\n",n);
        return decreasing(n-1);
    }

}

int main()
{
    int a,dec;
    printf("Enter the value of n: ");
    scanf("%d",&a);
    dec=decreasing(a);

    // printf("dec series: %d\n ",dec);
}