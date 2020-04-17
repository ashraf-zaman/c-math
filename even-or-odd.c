#include <stdio.h>
int main ()
{
    int e;

    printf("Enter any number : ");
    scanf("%d",&e);

    if (e%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");

    getch();
    return 0;
}
