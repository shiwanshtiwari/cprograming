#include<stdio.h>
#include<math.h>

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

int permutation(int n,int r)
{
    int npr;
    npr=factorial(n)/factorial(n-r);
    return npr;
}

int main()
{
    double a,b,x;
    char c;
    float d;
    int choice;
    printf("Enter the operands: ");
    scanf("%d %d %d",&a,&b,&x);
    scanf("%f",&d);
    printf("1. addition");
    printf("2. subtraction");
    printf("3. multiplication");
    printf("4. division");
    printf("5. power");
    printf("6. square root");
    printf("7. cube root");
    printf("8. cubic");
    printf("9. log base 10");
    printf("10. factorial");
    printf("11. epsilon");
    printf("12. differentiation");
    printf("13. exponentional");
    printf("14. abs");
    printf("15. sin");
    printf("16. sin inverse");
    printf("17. cos");
    printf("18. cos inverse");
    printf("19. tan");
    printf("20. tan inverse");
    printf("21. percenbtage");
    printf("22. nPr");
    printf("23. nCr");
    printf("24. ln");
    printf("25. x square");
    printf("26. integration");
    printf("27. remainder");
    printf("28. round");
    printf("29. modf");
    printf("30. ceil");
    printf("31. cosec");
    printf("32. cosec inverse");
    printf("33. sec");
    printf("34. sec inverse");
    printf("35. cot");
    printf("36. cot inverse");
    printf("36. inverse");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("%d",a + b);
        break;

        case 3:
        printf("%d",a - b);
        break;

        case 4:
        printf("%d",a * b);
        break;

        case 5:
        printf("%d",a + b);
        break;

        case 6:
        printf("%d",a + b);
        break;

        case 7:
        printf("%d",pow(a,2));
        break;

        case 8:
        printf("%d",pow(a,3));
        break;

        case 9:
        printf("%d",log10(a));
        break;

        case 10:
        int fact;
        int i=1;
        while(i<=fact){
            fact=fact*i;
            i=i+1;
        }
        printf("%d",fact);
        break;

        case 11:
        int sum;
        int i=1;
        while(i<sum){
            sum=sum+i;
            i=i+1;
        }
        printf("%d",sum);
        break;

        case 12:
        printf("%d",derive(c,d));
        break;

        case 13:
        printf("%d",exp(a));
        break;

        case 14:
        printf("%d",abs(a));
        break;

        case 15:
        printf("%d",sin(c));
        break;

        case 16:
        printf("%d",asin(c));
        break;

        case 17:
        printf("%d",cos(c));
        break;

        case 18:
        printf("%d",acos(c));
        break;

        case 19:
        printf("%d",tan(c));
        break;

        case 20:
        printf("%d",atan(c));
        break;

        case 21:
        int total,amt;
        float percent;
        scanf("%d %d",&total,&amt);
        percent = (amt/total)*100;
        printf("%d",percent);
        break;

        case 22:
        printf("%d",permutation(a,b));
        break;

        case 23:
        printf("%d",combination(a,b));
        break;
        
        case 24:
        printf("%d",log(a));
        break;

        case 25:
        printf("%d",pow(x,b));
        break;

        case 28:
        printf("%d",round(d));
        break;

        case 29:
        printf("%d",modf(a));
        break;

        case 30:
        printf("%d",ceil(a));

    }
}