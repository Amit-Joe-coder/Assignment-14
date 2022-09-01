/*3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include <stdio.h>
int main()
{
    int x, y = 0, z[10], q, i = 0;
    printf("Enter any 10 numbers: ");
    for (x = 0; x <= 9; x++)
    {
        scanf("%d", &z[x]);
        if (z[x] % 2 == 0)
        {
            y = y + z[x];
        }
        else
            i = i + z[x];
    }
    printf("sum of even number are %d\n", y);
    printf("sum of odd number are %d", i);
}