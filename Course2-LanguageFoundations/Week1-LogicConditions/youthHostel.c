
/*
    The hostel in which you plan to spend the night tonight offers very interesting rates, 
    as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and the sooner 
    guests arrive after noon, the less they have to pay. You are trying to build a C program that calculates your price to pay based on your arrival time.

    Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. 
    For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. 
    The base price is 10 dollars, and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, 
    so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input arrival time.
*/

#include <stdio.h>
int main(void) {
    int number_of_hours_past_noon;
    int base_price = 10;
    int dollars_added_after_noon = 5;
    int final_price = 0;
    int fixed_price = 53;
    scanf("%d", &number_of_hours_past_noon);
    
    final_price = (number_of_hours_past_noon * dollars_added_after_noon) + base_price;

    if(final_price > 53){
        printf("%d", fixed_price);
    }else{
        printf("%d", final_price);
    }

    return 0;
}