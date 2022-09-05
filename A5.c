/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/

#include <stdio.h>
int main()
{
    int x[10], y, min;
    printf("enter 10 number: ");
    for (y = 0; y <= 9; y++)
    {
        scanf("%d", &x[y]);
    }
    min = x[0];
    for (y = 1; y <= 9; y++)
    {
        if (min > x[y])
        {
            min = x[y];
        }
    }
    printf("%d", min);
    return 0;
}