#include <stdio.h>
int main(void) {
    int val1, val2;
    scanf("%d", &val1);
    scanf("%d", &val2);
    
    if( (val1 <= 5) && (val2 >= 8) ){
        printf("Tinuviel");
    }else if ( (val1 >= 10) && (val2 >= 10) ){
        printf("Calaelen");
    }else if ( (val1 <= 8) && (val2 <= 5) ){
        printf("Falarion");
    }else if ( (val1 >= 12) && (val2 <= 7) ){
        printf("Dorthonion");
    } else {
        printf("Uncertain");
    }
    
    return 0;
}