#include <stdio.h>

int main()
{
    printf("nn\n nnnn\n");
    printf("nnn\nnnn\nn\nn");
    
    int x;
    x=496;
    printf("%d",x);
    printf("\n");
    x=x+5;
    printf("%d",x);
    printf("\n");
    x=x-501;
    printf("%d",x);
    x=67;
    int y;
    y=98;
    printf("%d\n",x*y); 
    printf("%d\n",x/y);
    printf("%d\n",x+y);
    printf("%d\n",x-y);
    float x = 22;
    float y = 7;
      
       printf("%f",x/y);
    return 0;

   

}
#include <stdio.h>
int main(){
    int cp;
   printf("enter a value of cp : ");
   scanf("%d",&cp);
   int sp;
    printf("enter a value of sp : ");
    scanf("%d",&sp);
    
    if (sp>cp)
    { printf("profit");

        
    }
    else{
        printf("loss");
    }
    return 0;
}


