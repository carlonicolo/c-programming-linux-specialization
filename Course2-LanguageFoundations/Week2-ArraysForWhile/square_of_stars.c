/* Create a program that displays on the screen
a square of n x n stars, with the integer n given as an input. */

#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}