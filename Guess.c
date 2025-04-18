#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main <void>
{

    int guess, number, attempts = 0; 

    // intiallize random seed 
    srand(time(0)); 
    number = rand () % 100 + 1; // number between 1 and 100

    printf("welcome to the Guessing Game!\n"); 

    do 

    {
        printf("enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number)
        {

            printf("too high! try again.\n"); 

        }
        {

        else if (guess < number)
        printf("too low ! try again.\n"); 
        }

        else
         { 

            printf("congratulations! You guessed it in %d attempts.\n", attempts);
        }
    }
    while (guess != number); 
    return 0; 
}