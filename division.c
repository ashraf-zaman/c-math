#include <stdio.h>
int main()
{
    int num1, num2, division;

    printf("Enter your tow integer number : ");
    scanf("%d %d", &num1, &num2);

    division = num1/num2;

    printf("The division is = %d", division);

    getch();
    return 0;
}
