/*6. Write a program to sort elements of an array of size 10. Take array values from the
user.*/
#include <stdio.h>
int main()
{
    int x[10], i, j, temp;
    printf("enter 10 number: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", x[i]);
    }
}