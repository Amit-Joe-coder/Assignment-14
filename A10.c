/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user*/
#include <stdio.h>
int main()
{
    int x[10], i, j, y[10];

    printf("Enter any number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
        y[i] = x[i];
        printf("%d ", y[i]);
    }
}