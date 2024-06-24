#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    *-----------------------------------------------------------------
    *
    * Guess The Number Game
    * Written by Zachary "Xander" Bruce
    * Idea and accompanying Algol68 code written by Chris Hermansen
    *
    * URL for Chris Hermansen's Article:
    * https://opensource.com/article/20/12/learn-algol-68
    *
    * To compile and run this program make sure you have a C compiler
    * installed on your computer, if you do not ensure you find a
    * compiler, i.e. GCC.
    *
    * Once you have a compiler installed (like GCC) use the command 
    * line argument:
    *
    *       gcc -o GuessTheNumber GuessTheNumber.c
    *
    * Then run the compiled file and start guessing!
    *
    *-----------------------------------------------------------------
*/

int main(){

    srand(time(0)); // Seeding the random number to be guessed in the game
    int number, guess;

    number = rand() % 100;// random number generated between 1-100 here

    printf("\nGuess a number between 1-100: ");
    scanf("%d", &guess);

    while(guess != number){

        if(guess > number){

            printf("Too High, try another number: ");
            scanf("%d", &guess);

        }
        else{

            printf("Too low, try another number: ");
            scanf("%d", &guess);

        }

    }

    printf("You got it! The number was %d\n", number);

    return 0;
}

