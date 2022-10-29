#include <stdio.h>
void myFunction(int *iptr, double *aptr, char *cptr);
int main(void){
    int i = 42;
    int *iAdr = &i;

    double a = 3.14;
    double *aAdr = &a;

    char c = 'p';
    char *cAdr;
    cAdr = &c;

    printf("i = %d and its address is %p. \n", i, iAdr);
    printf("a = %lf and its address is %p. \n", a, aAdr);
    printf("c = %c and its address is %p. \n", c, aAdr);

    myFunction(iAdr, aAdr, cAdr);

    //Deference
    printf("Address of i is %p and i = %d. \n", iAdr, *iAdr);
    printf("Address of a is %p and a = %lf. \n", aAdr, *aAdr);
    printf("Address of c is %p and c = %c. \n", cAdr, *cAdr);

    return(0);   
}

void myFunction(int *iptr, double *aptr, char *cptr){
    printf("Function received addresses %p, %p and %p. \n", iptr, aptr, cptr);
}