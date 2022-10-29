#include <stdio.h>

struct point{
	double x;
	double y;
  };

int main(void) {
    //! showMemory(start=65520)
    struct point pentagon[5];
    int i;

    pentagon[4].y = 4.1;
    
    (pentagon+4)->y = 4.5;
    
    
	return 0;
}