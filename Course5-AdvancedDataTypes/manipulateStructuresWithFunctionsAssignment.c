#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */

void readDate(struct date *todptr){
    scanf("%d %d %d", &(*todptr).year,&(*todptr).month, &(*todptr).day);
}
void printDate(struct date tod){
    printf("%02d/%02d/%4d\n", tod.month, tod.day, tod.year);
}
struct date advanceDay(struct date tomptr){
    if(tomptr.month == 1 || tomptr.month == 3 ||tomptr.month == 5 ||tomptr.month == 7 ||tomptr.month == 8 ||tomptr.month == 10){
        if(tomptr.day<31){
            tomptr.day = tomptr.day+1;
        }else {
            tomptr.day = 1;
            tomptr.month = tomptr.month + 1;
        }
    }else if(tomptr.month == 4 || tomptr.month == 6 ||tomptr.month == 9 || tomptr.month == 11){
        if(tomptr.day<30){
            tomptr.day = tomptr.day+1;
        }else {
            tomptr.day = 1;
            tomptr.month = tomptr.month + 1;
        }
    }else if(tomptr.month == 2){
        if(tomptr.day<28){
            tomptr.day = tomptr.day + 1;
        }else {
            tomptr.day = 1;
            tomptr.month = tomptr.month + 1;
        }
    }else if(tomptr.month == 12){
        if(tomptr.day<31){
            tomptr.day = tomptr.day + 1;
        }else {
            tomptr.day = 1;
            tomptr.month = 1;
            tomptr.year = tomptr.year + 1;
        }
    }else{
        
    }
    return(tomptr);
}