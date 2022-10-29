#include <stdio.h>
int main(void) {
    //! showMemory(start=65520)
    int array[] = {6, 2, -4, 8, 5, 1};
    
    printf("Array contains %d, %d, ... , %d\n", array[0], array[1], array[5]);
    printf("These are stored at %p, %p, ..., %p\n", &array[0], &array[1], &array[5]);
    
    return 0;
}