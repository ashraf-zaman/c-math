#include <stdio.h>
int main()
{
    int num1, num2, sum;

    printf("Enter two integer number : ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;

    printf("The sum is = %d",sum);

    getch();
    return 0;
}
