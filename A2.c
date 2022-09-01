/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include <stdio.h>
int main()
{
    int  y[10], z = 0,x;
    printf("Enter any 10 numbers: ");
    for (x = 0; x <= 9; x++)
    {
        scanf("%d", &y[x]);
        z = z + y[x];
    }
    printf("Average of these 10 numbers is %d", z/x);
}