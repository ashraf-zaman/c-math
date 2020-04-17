#include <stdio.h>
int main()
{
    int num1, num2, multi;

    printf("Enter your tow integer number : ");
    scanf("%d %d", &num1, &num2);

    multi = num1*num2;

    printf("The multiplication is = %d", multi);

    getch();
    return 0;
}
