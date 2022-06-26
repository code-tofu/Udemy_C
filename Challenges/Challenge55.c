/*Challenge 55
Generate a random number between 0 to 20
Use will input their guess
Programme will indicate to the user if they are too high or low
Player wins the game if they can guess within five tries
Output to user should show number of tries, guessed number and high and low
*/

#include <stdio.h> 
#include <stdlib.h> //contains function srand
#include <time.h> //to get the seed for srand

int main(){


// initialise srand
time_t t;
srand((unsigned) time(&t));
//get a random number 0-20) and store in int variable
int randomNumber = rand() %21;
// printf("Random Number: %d\n", randomNumber); //to show random number generated for debugging

//initialise guessing variables
int playerGuess = -1, guessCount = 1;

  while ((playerGuess != randomNumber) && (guessCount<6)){ //better practice if changing 6 to max_count
    printf("Key in your Guess of the Chosen Number (between 0 and 20):");
    scanf("%d",&playerGuess);
    printf("You guessed %d\n",playerGuess);
    if(playerGuess == randomNumber){
    printf("You guessed correctly!");
    break; //why does this break the loop and not the if?
    }
    else{
      printf("You guessed incorrectly!\n");
      if(playerGuess < randomNumber){
        printf("Guess higher!\n");
      }
      else{
        printf("Guess lower!\n");
      }
      }
    printf("You have guessed %d times\n",guessCount);
    if(guessCount==5){
    printf("You have ran out of tries, game over!\n");
    break;
    }
    guessCount +=1;
  }
return 0;
}

/* NOTES:
Why not use a for loop?

Ternery/Conditional Operator for grammatical changes
("\n" You have %d tr%s left., numberOfGuesses, numberOfGuesses == 1? "y" : "ies");

Try using tenery operator in checking higher or lower

Is it okay to use multiple returns?
*/ 