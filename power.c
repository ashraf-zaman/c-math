#include <stdio.h>
int main()
{
    double receive_1, receive_2, result;

    printf("Enter any number : ");
    scanf("%lf", &receive_1);

    printf("Enter the power : ");
    scanf("%lf", &receive_2);

    result = pow(receive_1, receive_2);

    printf("The final result is = %.2lf", result);

    getch();
    return 0;
}
