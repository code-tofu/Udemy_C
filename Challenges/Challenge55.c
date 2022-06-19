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
printf("Random Number: %d\n", randomNumber);

//initialise guessing variables
int playerGuess = -1, guessCount = 1;

  while ((playerGuess != randomNumber) && (guessCount<6)){
    printf("key in your Guess:");
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

