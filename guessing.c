/* IN this part, I will ask the user to choose 3 options  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessing(int max)
{
    int trueNumber, userGuess, attempt = 0;

    trueNumber = rand() % max;
    printf("Welcome to the Guessing Number Game!\n");
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    printf("");

    int choice;
    scanf("%d", &choice);
    printf("You chose %d\n", choice);

    switch(choice)
    {
        case 1:
            printf("Let's start the game!\n");
            printf("Guess a number between " "1 and %d\n", max);

            do 
            {
                scanf("%d", &userGuess);
                if (userGuess > trueNumber)
                {
                    printf("Please guess a lower number\n");
                    attempt++;
                }
                else if (userGuess < trueNumber)
                {
                    printf("Please guess a higher number\n");
                    attempt++;
                }
                else if (userGuess == trueNumber)
                {
                    printf("You guessed the correct number in %d" " times\n", attempt);
                    attempt++;
                }
                else
                {
                    printf("You entered an invalid number!\n");
                    printf("Game lost!");
                }


            } while (userGuess != trueNumber);
            break;

        case 2:
            printf("with this option, you may select another max number\n");
            printf("Please enter the max number you want\n");
            scanf("%d", &max);
            printf("Your new max number is %d\n", max);
            printf("Guess a number between " "1 and %d\n", max);

            do 
            {
                scanf("%d", &userGuess);
                if (userGuess > trueNumber)
                {
                    printf("Please guess a lower number\n");
                    attempt++;
                }
                else if (userGuess < trueNumber)
                {
                    printf("Please guess a higher number\n");
                    attempt++;
                }
                else if (userGuess == trueNumber)
                {
                    printf("You guessed the correct number in %d" " times\n", attempt);
                    attempt++;
                }
                else
                {
                    printf("You entered an invalid number!\n");
                    printf("Game lost!");
                }


            } while (userGuess != trueNumber);
            break;

        case 3: 
        printf("You chose to quit the game!\n");
        printf("Thank you for playing and see you again!");
        break;

    }

}

int main()
{
    int max = 10;
    guessing(10);
    return 0;
}