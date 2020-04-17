#include <stdio.h>
int main()
{
    int num1, num2, sub;

    printf("Enter two integer number : ");
    scanf("%d %d", &num1, &num2);

    sub = num1 - num2;

    printf("The subtraction is = %d", sub);

    getch();
    return 0;
}
