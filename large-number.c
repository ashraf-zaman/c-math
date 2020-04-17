#include <stdio.h>
int main()
{
    int number_1, number_2;

    printf("Enter a first  integer number = ");
    scanf("%d",&number_1);

    printf("Enter a second integer number = ");
    scanf("%d",&number_2);

    if(number_1 > number_2)
        printf("Large number is = %d\n",number_1);

    else if(number_1 < number_2)
        printf("The large number is = %d\n",number_2);

    else
        printf("The number are equal");

    getch();
    return 0;
}
