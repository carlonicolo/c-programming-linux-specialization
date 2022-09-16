/*
Example
Input:
4
Alan Turing
Ada Lovelace
Donald Knuth
Claude Shannon
 
Output:
Turing Alan
Lovelace Ada
Knuth Donald
Shannon Claude
*/

#include <stdio.h>

int main(void) 
{
    int num, i;
    char first[101], last[101];
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
       scanf("%s", first);
       scanf("%s", last);
       printf("%s %s\n", last, first);
    }

    return (0);
}