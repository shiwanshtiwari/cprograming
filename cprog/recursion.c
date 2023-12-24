#include<stdio.h>
    int factorial(int n){
        int fact = 1;
        if(n==0){
            fact = 1;
        }
        else{
            fact = n*factorial(n-1);
        }
        return fact;
    }
int main()

{
    int y = 5;
    int z;
    z = factorial(y);
    printf("%d", z);
    return 0;
}