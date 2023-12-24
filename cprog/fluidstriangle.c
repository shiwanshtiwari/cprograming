#include<stdio.h>

int main()
{
    int num,count=1;
    printf("number of rows: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j--)
        {
            printf("%d ",count);
            count++;
        }
    printf("\n");
    }

}