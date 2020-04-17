#include <stdio.h>
int main()
{
    double r, sqroot;
    printf("Enter any number : ");
    scanf("%lf",&r);

    sqroot = sqrt(r);

    printf("The result is = %.2lf",sqroot);

    getch();
    return 0;
}
