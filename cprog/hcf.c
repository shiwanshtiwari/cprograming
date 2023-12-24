#include<stdio.h>
int min(int a,int b)

{
    if(a>b) return a;
    else return b;
}

int gcf(int a,int b)

{   
    int hcf;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
        hcf=i;
        }
    }
    return hcf;
}

int main()

{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    int hcf=gcf(a,b);
    printf("The hcf of %d and %d is: %d",a,b,hcf);
    scanf("%d",n);
    
}