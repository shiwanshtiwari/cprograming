// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int s,a,b,c;
//     float area;
//     printf("Enter the value of side a: ");
//     scanf("%d",&a);
//     printf("Enter the value of side b: ");
//     scanf("%d",&b);
//     printf("Enter the value of side c: ");
//     scanf("%d",&c);
//     s=(a+b+c)/2;
//     area=sqrt((s)*(s-a)*(s-b)*(s-c));
//     printf("The area of triangle is %0.2f",area);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int x,y;
//     printf("Enter the value of x and y: ");
//     scanf("%d %d",&x,&y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
    
//     printf("Swapped form is %d and %d",x,y);
// }

// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     float a,b,c;
//     float discriminant=0,root1,root2,imaginary;
//     printf("Enter the value of a,b and c: ");
//     scanf("%f %f %f",&a,&b,&c);
//     discriminant=pow(b,2)-4*a*c;
//     if(discriminant>0)
//     {
//         root1=(-b + sqrt(discriminant))/(2*a);
//         root2=(-b - sqrt(discriminant))/(2*a);
//         printf("Two distinct values of roots are %0.2f and %0.2f",root1,root2);
//     }
//     else if(discriminant==0)
//     {
//         root1=root2=-b/(2*a);
//         printf("Two distinct values of roots are %0.2f and %0.2f",root1,root2);
//     }
//     else if(discriminant<0)
//     {
//         root1=root2=-b/(2*a);
//         imaginary=(sqrt(-discriminant))/(2*a);
//         printf("Two distinct complex roots are %0.2f+%0.2f and  %0.2f-%0.2f",root1,imaginary,root2,imaginary);
//     }    

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int a,b,c;
//     char y;

//     printf("Enter the operater: ");
//     scanf("%s",&y);
//     printf("Enter the operands a and b: ");
//     scanf("%d %d",&a,&b);
   
//     switch(y)
//     {
//         case'+':(c=a+b);
//         printf("The addition of two numbers is %d",c);
//         break;
//         case'-':(c=a-b);
//         printf("The substraction of two numbers is %d",c);
//         break;
//         case'*':(c=a*b);
//         printf("The multiplication of two numbers is %d",c);
//         break;
//         default: printf("Invalid operater");
//         break;

//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int num,remainder,reverse=0,sum=0,t;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     t=num;

//     while(num>0)
//     {
//         sum=sum+num%10;
//         num=num/10;

//     }
//     while(t!=0)
//     {
//        remainder=t%10;
//        reverse=reverse*10+remainder;
//        t=t/10; 
//    }
//     printf("Sum of number is: %d",sum);
//    printf("Reverse of number is: %d",reverse);
//    return 0;
//}

// #include<stdio.h>

// int main()
// {
//    int arr[5],max,min,i;
//    printf("Enter the array: ");
//    for(int i=0;i<5;i++)
//    {
//         scanf("%d",&arr[i]);
//    }
//    max=arr[0];
//    min=arr[0];
//    int lpos=0,spos=0;
//    for(i=0;i<5;i++)
//    {
//     if(arr[i]>max)
//     {
//         max=arr[i];
//         lpos=i;
//     }
//     if(arr[i]<min)
//     {
//         min=arr[i];
//         spos=i;
//     }
//    }
//    int temp;
//    temp=arr[lpos];
//    arr[lpos]=arr[spos];
//    arr[spos]=temp;

//   for(i=0;i<=4;i++)
//   {
//     printf("%d",arr[i]);
//   }
   
// }

// #include<stdio.h> // Transpose of a matrix

// int main()
// {
//     int a[3][3],trans[3][3];
//     printf("Enter the values of 2D array: ");
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             trans[j][i]=a[i][j];
           
//         }
//     }
//     for(int i=0;i<3;i++ )
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d",trans[i][j]);
//         }
//         printf("\n");
    
//     }

// return 0;
// }

// #include<stdio.h>

// void main()
// {
//     int a[3][3],b[3][3],c[3][3],d[3][3];
//     printf("Enter the values of arrays: ");
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the values of second arrays: ");
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//        for(int j=0;j<3;j++)
//        {
//             c[i][j]=a[i][j]+b[i][j];
//        } 
//     }

//     printf("Addition of matrices is: ");
//     for(int i=0;i<3;i++)
//     {
//        for(int j=0;j<3;j++)
//        {
//             printf("%d",c[i][j]);

//        } 
//     printf("\n");
//     }

// }
#include <stdio.h>;
int main(){
   int s,p,r,t;
  float area;
  printf("enter value of p: ");
  scanf("%f",&p);
  printf("enter the value of r: ");
  scanf("%f",&r);
  printf("enter the value of t: ");
  scanf("%f",&t);
  s=p+r+t/2;
  area= p-r-t-p-r-t*t/r*t/9;
  printf("%f",area);
    return 0;
}