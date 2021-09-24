/* For this part, I will create a main that will computes the restaurant bill 
with tax and tip included. 
First, I will assign the meal cost
Then I will assign the tax and tip amount
Later, I will make the program to randomly choose a meal cost and calculate the bill.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float salad = 9.95;
    float soup = 4.55;
    float sandwich = 13.25;
    float pizza = 22.35;
    time_t t;
    int i = rand() % 5 + 1;
    int tax = 10;
    int tip = 10;
   

    srand((unsigned) time(&t));
  
    if (rand() % 4 == 1 )
    {
        float total = salad*0.1*0.1 + salad;
        printf("You ordered salad\n");
        printf("The meal costs you $%f\n", salad);
        printf("The tax amount is %d", tax);
        printf( "%%\n");
        printf("In our restaurant, the tip amount is also added in the bill: %d", tip);
        printf( "%%\n");
        printf("So your total bill is $%f\n", total);
    }
    else if (rand() % 4 == 2 )
    {
        float total = soup*0.1*0.1 + soup;
        printf("Your ordered soup\n");
        printf("The meal costs you $%f\n", soup);
        printf("The tax amount is %d", tax);
        printf( "%%\n");
        printf("In our restaurant, the tip amount is also added in the bill: %d", tip);
        printf( "%%\n");
        printf("The total bill is $%f\n", total);

    }
    else if (rand() % 4 == 3 )
    {
        float total = sandwich*0.1*0.1 + sandwich;
        printf("You ordered sandwich\n");
        printf("The meal costs you $%f\n", sandwich);
        printf("The tax amount %d", tax);
        printf( "%%\n");
        printf("In our restaurant, the tip amount is also added in the bill: %d", tip);
        printf( "%%\n");
        printf("The total bill is $%f\n", total);
    }
    else 

    {
        float total = pizza*0.1*0.1 + pizza;
        printf("You ordered pizza\n");
        printf("The meal costs you $%f\n", pizza);
        printf("The tax amount %d", tax);
        printf( "%%\n");
        printf("In our restaurant, the tip amount is also added in the bill: %d", tip);
        printf( "%%\n");
        printf("The total bill is $%f\n", total);
    }

    return(0);

  

}
