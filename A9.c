/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/

#include <stdio.h>
int main()
{
    int x[10], i;
    printf("Enter any number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    i = i - 1;
    while (i >= 0)
    {
        printf("%d ", x[i]);
        i--;
    }
}