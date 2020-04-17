#include <stdio.h>
int main()
{
    int r, absolute;

    printf("Enter any value : ");
    scanf("%d",&r);

    absolute = abs(r);

    printf("The absolute value is = %d",absolute);

    getch();
    return 0;
}
