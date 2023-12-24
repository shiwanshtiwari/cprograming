#include<stdio.h>
#include<string.h>

struct student_of_srmap
{
    char student_name[20];
    char registration_no[20];
    char course[20];
};

int main()
{
    struct student_of_srmap s1;
    strcpy(s1.student_name,"Nishant");
    strcpy(s1.registration_no,"AP22110010944");
    strcpy(s1.course,"CSE AIML");

    printf("Student name = %s\n",s1.student_name);
    printf("Registration no = %s\n",s1.registration_no);
    printf("Course = %s\n",s1.course);

    struct student_of_srmap s2;
    strcpy(s2.student_name,"Praveen");
    strcpy(s2.registration_no,"AP22110010950");
    strcpy(s2.course,"CSE AIML");

    printf("Student name = %s\n",s2.student_name);
    printf("Registration no = %s\n",s2.registration_no);
    printf("Course = %s\n",s2.course);

    struct student_of_srmap s3;
    strcpy(s3.student_name,"Bhowmik");
    strcpy(s3.registration_no,"AP22110010962");
    strcpy(s3.course,"CSE CORE");

    printf("Student name = %s\n",s3.student_name);
    printf("Registration no = %s\n",s3.registration_no);
    printf("Course = %s\n",s3.course);

    struct student_of_srmap s4;
    strcpy(s4.student_name,"Biswajit");
    strcpy(s4.registration_no,"AP22110010930");
    strcpy(s4.course,"CSE CORE");

    printf("Student name = %s\n",s4.student_name);
    printf("Registration no = %s\n",s4.registration_no);
    printf("Course = %s\n",s4.course);

    struct student_of_srmap s5 = {"Nivedha","AP22110010540","CSE CORE"}; //single line assingment
    struct student_of_srmap *ptr = &s5;
    printf("Registration number = \n",(*ptr).registration_no);

return 0;
}

#include<stdio.h>
int a =5;

void b()
{
    printf("%d",a);
}
int main()
{

    b();
    printf("%d",a);
    return 0;
}