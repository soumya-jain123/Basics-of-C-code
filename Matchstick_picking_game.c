#include <stdio.h>
int main()
{
    int userMatches, computerMatches;
    int totalMatches = 21;

    printf("Welcome To the Matchstick Game!\n");
    printf("Rules: You can pick 1, 2, 3 or 4 Matchsticks at a time.\n");
    printf("The one who pics the last matchstick loses the game.\n\n");

    while(totalMatches > 0){
        // user's turn
        printf("Remaining Matchsticks: %d\n",totalMatches);
        printf("Your turn - Enter the number of Matches(1-4): ");
        scanf("%d", &userMatches);

        if ((userMatches<1 || userMatches >4)|| userMatches>totalMatches){
            printf("Invalid Input. PLease pick either 1,2,3 or 4 matches only !\n");
            continue ;
        }
        // update the total matches
        totalMatches -= userMatches;

        // check if the user lost
        if (totalMatches==0){
        printf("You picked the laast matches. You loose !\n");
        printf("CONGRATS!! to the computer");
        break ;
        }
        // computer's turn
        computerMatches = (totalMatches % 5 ==0) ? 4 :(totalMatches%5);
        printf("Computer Picked %d matchstick(s).\n", computerMatches);

        //update total matches
        totalMatches -= computerMatches;

        // checks if computer lost 
        if(totalMatches == 0){
            printf("computer picked the last matches. computr losses!\n");
            printf("CONGRATS!! to the user ");
            break;
        } 

    }

    return 0;

}