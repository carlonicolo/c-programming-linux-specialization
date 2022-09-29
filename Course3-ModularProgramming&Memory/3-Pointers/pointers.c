#include <stdio.h>
int main(){
    int a = 42;
    double d = 58.394;
    char c = 'r';
    
    int * addressOfA = &a;
    double * addressOfD = &d;
    char * addressOfC = &c;

    printf("Address of a: %p\n", addressOfA);
    printf("Address of d: %p\n", addressOfD);
    printf("Address of c: %p\n", addressOfC);

    printf("At the address %p there is the value %.2lf\n", addressOfD, * addressOfD);
    
    return 0;
}