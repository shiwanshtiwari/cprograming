#include<stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    int h,m,s;
    // int d=1000;
    printf("Set time: \n");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60)
    {
        printf("Invalid time!!\n");
    }

    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
            if(h>12)
        {
            h=1;
        }
        printf("\n Nishant's Clock: "); 
        printf("\n %0.2d:%0.2d:%0.2d",h,m,s);
        Sleep(1000);
        system("cls");

    } 
}