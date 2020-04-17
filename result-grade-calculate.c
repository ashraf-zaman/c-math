#include <stdio.h>
int main()
{
    float marks;

    printf("Enter your marks : ");
    scanf("%f",&marks);

    if(marks >= 100)
        printf("Invalid number, Please try to again");

    else if(marks >= 80)
        printf("A+");

    else if(marks >= 70)
        printf("A");

    else if(marks >= 60)
        printf("A-");

    else if(marks >= 50)
        printf("B");

    else if(marks >= 40)
        printf("C");

    else if(marks >= 33)
        printf("D");

    else
        printf("Fail");

    getch();
    return 0;
}
