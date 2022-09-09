/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. 
Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. 
The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. 
Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). 
Your program should calculate the total cost of these purchases, then display it with 6 decimal places.

 

Example
There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0. 
You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth. It will cost exactly $29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0

Output:
29.325000

*/

#include <stdio.h>
#define SIZE 10

int main(void){
    
    int length;
    double total_price = 0;
    double price_pound[SIZE];

    scanf("%d", &length);
    double arr_value;


    //double total_sum = 110.0;
    //double factor = total_sum / length;
    double weight[SIZE];

    for(int i = 0; i < length; i++){
        scanf("%lf", &price_pound[i]);
    }

    for(int i = 0; i < length; i++){
        scanf("%lf", &weight[i]);
    }

    for(int i = 0; i < length; i++){
        total_price = total_price + (price_pound[i] * weight[i]);
    }

    printf("%.6f", total_price);


    /* for(int i = 0; i < length; i++){
        printf("new_array[%d] = %.1f\n", i, new_array[i]);
    } */

    return 0;

}