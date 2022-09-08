/*7. Write a program to find second largest in an array.Take array values from the user.
 */
#include <stdio.h>
int main()
{
    int x[10], i, j, largest, s_largest, temp;
    printf("enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 9; i++)
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
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (x[i] < x[j])
            {
                s_largest = x[i];
                largest = x[j];
                x[i] = x[j];
            }
        }
    }
    printf("%d", s_largest);
}