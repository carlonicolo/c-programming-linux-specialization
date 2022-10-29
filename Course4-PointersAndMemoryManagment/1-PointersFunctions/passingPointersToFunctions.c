#include <stdio.h>
void timesTwo(int *num);
int main(void) {

    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);

    timesTwo(&n);
    printf("In main: the value of n is %d. \n", n);
    return(0);
}

void timesTwo(int *numptr) {
    printf("In the function: the number is %d.\n", *numptr);
    *numptr = *numptr * 2;
    printf("In the function: the number is %d.\n", *numptr);
}