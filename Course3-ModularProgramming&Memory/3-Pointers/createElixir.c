/*
You are developing an elixir that supposedly makes a person younger. 
You just need to get the software working correctly before starting to market your product. 
Your program keeps track of a person's age, but in order to be more secretive you work with 
a pointer rather than the variable that stores the age directly. 
*/

#include <stdio.h>

int main(void) {

    int age;

    int *ageptr; // add a line here that declares an integer pointer named "ageptr"
    
    scanf("%d", &age);

    ageptr = &age; // add a line here that stores the address of age in ageptr  
    
    printf("The secret address is... ");

    printf("%p\n", ageptr); // add a line here that prints out the address stored in ageptr  
    
    printf("Now take three drops of the magic elixir. \n");

    *ageptr = *ageptr - 5; // add a line that uses only ageptr to lower the age by 5 years

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}