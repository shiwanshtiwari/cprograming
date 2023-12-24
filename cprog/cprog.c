// #include<stdio.h>

//     int num,k=1;
//     printf("Enter: ");
//     scanf("%d",&num);
//      for(int i=1;i<=num;i++)
//      {
//         for(int m=num-i; m>0; m--)
//         {
//             printf(" ");
//         }

//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",k);
//             k++;

//         }
//             printf("\n");
     }


// //     int num;
// //     printf("Enter: ");
// //     scanf("%d",&num);
// //      for(int i=1;i<=num;i++)
// //      {
// //         for(int m=num-i; m>0; m--)
// //         {
// //             printf(" ");
// //         }

// //         if(i==1 || i==num)
// //         {
// //             for(int m=1; m<=i*2-1; m++)
// //             {
// //                 printf("*");
// //             }
// //         }
// //         else
// //         {
// //             printf("*");
// //                 for(int j=1;j<=2*i-3;j++)
// //                 {
// //                     printf(" ");
// //                 }
// //             printf("*");
// //         }
// //         printf("\n");
// //      }

      
// // return 0;
// // }
// int main()  
// {  
// int i,s=0;
// for(i=1;i<=5;i++)
// {
//     s=s+(fac(i)/i);
//     printf("%d\n",fac(i));
// }
// printf("Sum = %d",s);
  
// }  
  
// int fac(int x)  
// {  
//    int i,res=1;
//    for(i=1;i<=x;i++)
//    {
//        res=res*i;
//    }
//    return res;
    
// }

// #include<stdio.h>

// int main()
// {
//     int w1,w2,w3;
//     printf("Ware houses: ");
//     scanf("%d %d %d",&w1,&w2,&w3);
//     while(w1>=3 || w2>=3 || w3>=3)
//     {
//         if(w1>2)
//         {
//             w2++;
//             w3++;
//             w1-=3;
//         }
//         else if (w2>2)
        
        
//         {
//             w3++;
//             w1++;
//             w2-=3;
//         }
//         else if(w3>2)
//         {
//             w2++;
//             w1++;
//             w3-=3;
//         }
       
//     }
//     printf("%d %d %d",w1,w2,w3);
//     return 0;
// }
// #include<stdio.h>

// int main()
// {
//     int arr[4],sum=0;
//     printf("Enter the array: ");
    
//     for(int i=0;i<4;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<4; i++)
//     {
    
//             sum =  sum + arr[i];
//             printf("\n %d", sum);
        
        
//     }

// // 
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char arr[10] = "UNIVERSITY";
//     int length = strlen(arr);

//     for(int i=0; i<length; i++)
//     {
//         {
//             for(int k=0;k<=length-i;k++)
//             printf(" ");
//         }
//         for(int j=0; j<=2*i-1; j++)
//         {
//             printf("%c", arr[j]);
//         }
//         printf("\n");
//     }
        
    
//     for(int i=0; i<length-1; i++)
//     {
//         for(int k=0;k>=length-i;k--)
//         {
//             printf(" ");
//         }
//         for(int j=0; j<length-i-1; j++)
//         {
//             printf("%c",arr[j]);
//         }
//         printf("\n");
//     }



//     return 0;
// #include <stdio.h>

// int main(){
//       int arr[5]={1,2,3,4,5,55,5,5,5}
//       printf("%d",arr[4]);
//       return 0;  
//    }
// #include <stdio.h>
// int main(){
//     int x,y;
//     printf("enter the value of x: ");
//     scanf("%d",&x);
//      printf("enter the value of y: ");
//     scanf("%d",&y);
//      x = x + y; 
//     y = x - y; 
//     x = x - y;
//     printf("x:%d,y:%d",x,y);
//     return 0;
    
// }