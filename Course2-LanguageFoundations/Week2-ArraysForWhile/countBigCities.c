/* 
You want to determine the number of cities in a given region that have a population strictly greater than 10,000. 
To do this, you write a program that first reads the number of cities in a region as an integer, 
and then the populations for each city one by one (also integers).

Input
6
1000
5000
15000
4780
0
23590

Output
2
*/

#include <stdio.h>

int main(void){
    int population = 10000;

    int city_population;
    int num_of_cities;
    int count = 0;

    scanf("%d", &num_of_cities);

    for(int i=0; i < num_of_cities; i++){
        scanf("%d", &city_population);
        if(city_population > population){
            count++;
        }
    }
    
    printf("%d", count);
    

    return 0;

}