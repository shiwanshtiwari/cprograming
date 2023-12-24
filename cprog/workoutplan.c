#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void intro();
void begining();
void pause();
void display_screen();
void menu();
void add_exercise();
void type_of_routine();
void monday_plan();
void tuesday_plan();
void wednesday_play();
void thursday_plan();
void friday_plan();
void saturday_plan();
void sunday_plan();
void empty_structure();
void reading();
void copy_file();
void delete();
void empty_structure();

struct plan_weekly
{
    char weekday[50];
    char muscle_group[50];
    char exercises[100];
    char reps_and_sets[50];

}p1[100];

struct plan_days
{
    char weekday[50];
    char muscle_group[50];
    char exercises[100];
    char reps_and_sets[50];

}p2[100];

int main()
{
    welcome();
    pause(); // to continue the programe
    empty_structure();
    reading(); // scanning file
    
    int ch=1;
    while(1)
    {
        clear_display();
        menu();
        int choice = 1;
        printf("\n\nEnter type -> ");
        scanf("%d", &ch);

    
        switch(ch)
        {

                case 1:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             Type of routine\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                type_of_routine();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;


            case 2:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of monday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                monday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 3:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of Tuesday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                tuesday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 4:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of wednesday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                wednesday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 5:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of thursday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                thursday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 6:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of friday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                friday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 7:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of saturday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                saturday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 8:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             All exercises of sunday\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nHere is the exercise chart :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                sunday_plan();
                printf("\nBack to Main Menu -> (Press 0)");
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                break;

            case 9:
                clear_display();
                title();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             Delete Exercise\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nEnter the details given below :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                while (choice)
                {
                    delete_exercise();
                    printf("\n\nTo delete more book -> (Press 1)");
                    printf("\nBack to Main Menu -> (Press 0)");
                    printf("\nEnter your choice : ");
                    scanf("%d", &choice);
                }
                break;

            case 10:
                clear_display();
                intro();
                printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("                                                             Add Exercise\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\nEnter Your Details Below :\n");
                printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
                while (choice)
                {
                    add_exercise();
                    printf("\n\nTo any exercise -> (Press 1)");
                    printf("\nBack to Main Menu -> (Press 0)");
                    printf("\nEnter your choice : ");
                    fflush(stdin);
                    scanf("%d", &choice);
                }
                break;
            
            default:
                exit(1);
                break;
        };
    }

}

    void intro()
    {
        printf("\n\n");
        printf("                                   ******************** * BEAST TRANSFORMATION WORKOUT PLAN * ********************\n");
        printf("                                   *******************                                        ********************\n");
        printf("                                   *******************- - - - - - - - - - - - - - - - - - - - ********************\n");
        printf("                                   *******************                                        ********************\n");
        printf("                                   *******************         * PROGRESS EVERYDAY *          ********************\n");
        printf("                                   *******************************************************************************\n");
    }

    void begining()
    {
        printf("\n\n\n");
        printf("                                  -------------------------- BE PATIENT --------------------------\n");
        printf("                                  ---------------------- GO TO THE FUCKING -----------------------\n");
        printf("                                  -----------------------------GYM--------------------------------\n");
        printf("                                                                                -by Nishant Tiwari\n");
    }

void pause ( void )
{
    printf("                              Press enter to continue.....");
    char enter = 0;
    while (enter != '\r' && enter != '\n') 
    { 
        enter = getchar(); 
    }
};

void clear_display()
{
    system("cls");
};

void menu()
{
    title();
    printf("\n\n\n");
    printf("************************************************************\n");
    printf("              *      YOUR JOURNEY BEGINS    *               \n");
    printf("************************************************************\n");
    printf("                    1. Type of routine                      \n");
    printf("                    2. Monday's plan                        \n");
    printf("                    3. Tuesday's plan                       \n");
    printf("                    4. Wednesday's plan                     \n");
    printf("                    5. Thursday's plan                      \n");
    printf("                    6. friday's plan                        \n");
    printf("                    8. Sunday's plan                        \n");
    printf("                    9. Delete exercise                      \n");
    printf("                   10. Add new exercise                     \n");
    printf("************************************************************\n");
    printf("                                                            \n");
    printf("************************************************************\n");
}






