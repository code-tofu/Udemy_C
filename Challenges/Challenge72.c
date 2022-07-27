/* CHALLENGE 72:
Create a tic tac toe game, player 1 vs 2
Player 1 Uses "X"
Player 2 Uses "O"
3 by 3 grid

Type char array - Can either do in 1D Array or 2D Array
*/

// 2D array solution:
#include <stdio.h>

//function prototypes
int boardprint(char userBoard[3][3]);
int editboard(char userBoard[3][3], int userNum, int userChoice);
int boardcheck(char userBoard[3][3]);

int main (){
// declare and initialise array
char mainBoard[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int playerChoice=1, playerTurn=1;
int gameEnd = 0;
//Initialise Game
boardprint(mainBoard);
printf("Welcome to TicTacToe! Player 1 uses X and Player 2 uses 0.\n");

while(gameEnd!=1){ 
    printf("Player %d key in the number to mark the board:",playerTurn);
    //check player valid input
    if(playerChoice<10 && playerChoice>0){
        scanf("%d",&playerChoice);
        editboard(mainBoard, playerTurn, playerChoice);
        boardprint(mainBoard);
        //change player turn if turn ends
        if(playerTurn==1){
            playerTurn = 2;
        }
        else{
            playerTurn=1;
        }
    }
    else{
        printf("Please only key in 1 to 9!");
    }


   gameEnd = boardcheck(mainBoard);
   if((gameEnd==1) && (playerTurn==1)){
        printf("Player 2 Wins");
   }
   if((gameEnd==1) && (playerTurn==2)){
        printf("Player 1 Wins");
   }

}
return 0;
}


// Function to Print Board
int boardprint(char userBoard[3][3]){
  int i,j;
    printf("\n|---|---|---|\n");
    for(i=0;i < 3;i++){
        printf("|");  
        for(j=0;j < 3;j++){
            printf(" %c ", userBoard[i][j]);    
            printf("|");
        }
        printf("\n|---|---|---|\n");
    }
return 0;
}


//Function to Edit Board
int editboard(char userBoard[3][3], int userNum, int userChoice){

    int i,j;
    i = (userChoice-1)/3;
    j = (userChoice%3+2)%3;

    if(userNum==1){ //player 1 uses X
        userBoard[i][j] = 'X';
    } 
    else{ //player 2 uses O
        userBoard[i][j] = '0';
    }
return 0;
}

int boardcheck(char userBoard[3][3]){
    int gameWin = 0;
    int i,j;
    //check across rows
    for (i=0; i<3;i++){
        //checkcall: printf( "%d %c %c %c \n", i,userBoard[i][0],userBoard[i][1],userBoard[i][2]);
        if((userBoard[i][0] == userBoard[i][1]) && (userBoard[i][1] == userBoard[i][2])){
            gameWin = 1;
        }
    }

    //check down columns
    for (j=0; j < 3;j++){
        //checkcall: printf( "%d %c %c %c \n", j ,userBoard[0][j], userBoard[1][j], userBoard[2][j]);
        if((userBoard[0][j] == userBoard[1][j]) && (userBoard[1][j] == userBoard[2][j])){
            gameWin = 1;
        }
    }

    //checkcall: printf( "%d %c %c %c \n", i,userBoard[i][0],userBoard[i][1],userBoard[i][2]);
    i=0; 
    j=0;
    if((userBoard[i][j] == userBoard[i+1][j+1]) && (userBoard[i+1][j+1] == userBoard[i+2][j+2])){
        gameWin = 1;
    }
    i=2; 
    j=0;
    if((userBoard[i][j] == userBoard[i-1][j+1]) && (userBoard[i-1][j+1] == userBoard[i-2][j+2])){
        gameWin = 1;
    }

    //checkreturn: printf("win: %d",gameWin);
    return gameWin ;
}