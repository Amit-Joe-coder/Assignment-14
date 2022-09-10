/*8. Write a program to find the second smallest number in an array.Take array values
from the user.
*/
#include <stdio.h>
int main()
{
    int x[10], i, j, smallest, s_smallest, temp;
    printf("enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 9; i++) // sorting
    {
        for (j = i + 1; j < 10; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (i = 1; i < 9; i++) // finding 2nd smallest number
    {
        for (j = 0; j < 10; j++)
        {
            if (x[i]> x[j])
            {
                s_smallest = x[j];
                smallest = x[i];
            }
        }
    }
    printf("%d", s_smallest);
}
