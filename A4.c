/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/

#include <stdio.h>
int main()
{
    int x[10], max, i;
    printf("Enter 10 numbers: ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &x[i]);
    }
    max = x[0];
    for (i = 1; i <= 9; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }
    printf("%d",max);
}
