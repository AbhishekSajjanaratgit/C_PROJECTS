#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    // VARIABLE DECLARATIONS:
    int GUESS;
    int NUM_OF_GUESS = 0;

    // SEEDING THE RANDOM NUMBERS
    srand(time(NULL));
    int RAND_NUM;

    // GENERATING A RANDOM NUMBER EVEN BEFORE ANYTHING HAPPENS (BECAUSE THE ENTIRE GAME IS BASED ON THAT)
    // FORMULA : random_number = (rand() % (upper_limit - lower_limit + 1)) + lower_limit;
    // FOR 1 - 100 {INCLUSIVE}
    RAND_NUM = (rand() % 100) + 1;

    do{
        printf("Guess between 1 - 100 :");
        scanf("%d",&GUESS);
        NUM_OF_GUESS++;

        // LOGIC :
        if (GUESS < RAND_NUM){
            printf("GUESS LARGER\n");
        }
        else if (GUESS > RAND_NUM){
            printf("GUESS SMALLER\n");
        }
        else{
            printf("YOU GUESSED CORRECTLY IN %d ATTEMPT!!!\nTHE NUMBER IS : %d ",NUM_OF_GUESS,RAND_NUM);
            break;
        }
        
    } while (GUESS != RAND_NUM);

    printf("\nBye Bye, Thanks for Playing.");
    printf("\nDeveloped by: <__________>");

    
}