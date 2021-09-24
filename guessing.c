/* IN this part, I will ask the user to choose 3 options:
Option 1: user will be able to start the game and guess a number from 1 to 10.
Option 2: user can choose a different max number and continue playing the game.
OPtion 3: user can choose to quit the game.
 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Menu()
{ 
    printf("Welcome to the Guessing Number Game!\n");
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    printf("");

}
void Game()
{
   Menu();
   int trueNumber, userGuess, attempt = 0;
   time_t t;
   srand((unsigned) time(&t));
   int max =10;
   trueNumber = rand() % max + 1;
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
            attempt++;
            scanf("%d", &userGuess);
            if (userGuess > trueNumber)
            {
                printf("Please guess a lower number\n");
            }
            else if (userGuess < trueNumber)
            {
                printf("Please guess a higher number\n");   
            }
            else if (userGuess == trueNumber)
            {
                printf("You guessed the correct number in %d" " times\n", attempt);
                printf("");
                Game(); 
            }
            else
            {
                printf("You entered an invalid number!\n");
                printf("Game lost!");
            }


        } while (userGuess != trueNumber);
        break;
    
    case 2:
        printf("With this option, you may select another max number that is under 100\n");
        printf("Please enter the max number you want\n");
        scanf("%d", &max);
        printf("Your new max number is %d\n", max);
        printf("Guess a number between " "1 and %d\n", max);
        
        if(0< max && max <100 & max >= trueNumber)
        {
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
                        printf("");
                        Game();
                        
                    }
                else
                    {
                        printf("You entered an invalid number!\n");
                        printf("Game lost!");
                    }


            } while (userGuess != trueNumber);
        }
        else{
            printf("You entered an invalid number!\n");
            printf("Game lost!");
        }
        break;

    case 3: 
        printf("You chose to quit the game!\n");
        printf("Thank you for playing and see you again!\n");
        break;
 
   }
        
}


int main()
{
   Game();
   return 0;
}