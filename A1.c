/*1. Write a program to calculate the sum of numbers stored in an array of size 10.
 Takearray values from the user.*/

#include <stdio.h>
int main()
{
    int i, x[10], q = 0;
    printf("Enter 10 Numbers: ");
    for (i = 0; i <= x[10 - 1]; i++)
    {
        scanf("%d", &x[i]);
        q = q + x[i];
    }
    printf("sum of all 10  numbers present in array is %d ", q);
    return 0;
}
