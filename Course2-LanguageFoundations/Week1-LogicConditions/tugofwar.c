/*
You decide to bet on the final match of the Tug of War National Championship. 

Prior to the match the names and weights of the players are presented, 
alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on). 
There is the same number of players on each side. You record the player weights as they are presented 
and calculate a total weight for each time to inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per team. 
Then, the program should read the player weights (integers representing kilograms) alternating by team. 

After calculating the total weight of each team, the program should display the text "Team X has an advantage" 
(replacing X with 1 or 2 depending on which team has a greater total weight).

You will then display the text "Total weight for team 1:" followed by the weight of team 1, then 
"Total weight for team 2:" followed by the weight of team 2 (see example below).

You are guaranteed that the two teams will not have the same total weight.

Example
Each team is composed of four players. Those of the first weigh 110, 113, 112, and 117kg, 
while those of the second weigh 106, 102, 121, and 111kg. Team 1 weighs a total of 452kg whereas team 2 weighs a total of 440kg, giving team 1 an advantage.
*/

#include <stdio.h>
int main(void) {
    
    int member_of_team, weight;
    int total_weight_team1 = 0;
    int total_weight_team2 = 0;
    scanf("%d", &member_of_team);
    
    for(int i=1; i<=(member_of_team*2); i++){
        if(i % 2){
            scanf("%d", &weight);
            //printf("%d\n", weight);
            total_weight_team1 = total_weight_team1 + weight;
        }else{
            scanf("%d", &weight);
            total_weight_team2 = total_weight_team2 + weight;
        }
    }
    //printf("total weight 1 %d", total_weight_team1 );
    //printf("total weight 2 %d", total_weight_team2 );

    if (total_weight_team1 > total_weight_team2){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n", total_weight_team1);
        printf("Total weight for team 2: %d\n", total_weight_team2);
    }else{
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n", total_weight_team1);
        printf("Total weight for team 2: %d\n", total_weight_team2);
    }


    return 0;
}