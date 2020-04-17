#include <stdio.h>
int main()
{
    int num1, num2, result;

    printf("Enter your tow integer number : ");
    scanf("%d %d", &num1, &num2);

    result = num1+num2;
    printf("The sun is = %d\n", result);

    result = num1-num2;
    printf("The subtraction is = %d\n", result);

    result = num1*num2;
    printf("The multiplication is = %d\n", result);

    result = num1/num2;
    printf("The division is = %d\n", result);

    result = num1%num2;
    printf("The remainder is = %d\n", result);

    getch();
    return 0;
}

