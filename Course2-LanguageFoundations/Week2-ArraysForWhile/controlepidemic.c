/* In order to be able to better fight various epidemics in a region, the department of medicine
of a major university has launched a large study.
Researchers are interested in how fast an epidemic spreads, and therefore the speed at
which health measures must be put in place. Your program should first read an integer representing
the total population of the area. Knowing that a person was infected on day 1 and that each infected person
contaminates two new people every day, you must calculate the day at which the entire population of the area will be infected.

Examples
(Pay close attention to the last example)

For a total population of 3 inhabitants, on day 1 a single person is infected. The next day, that person contaminates 2 new people so there are 3 infected people in total. This is the entire population, so it takes 2 days to contaminate the entire population.

Input:
3

Output:
2
*/

#include <stdio.h>

int main()
{
    int day = 1;
    int contaminated = 1;
    int population;

    scanf("%d", &population);

    while (contaminated < population)
    {
        day++;
        contaminated *= 3;
    }

    printf("%d", day);

    return (0);
}