/***************************************
 * Name: Andrew Derringer
 * Date: 11/26/2018
 * Description: GBoard class implementation file. Class contains two private
 * variables including a char type 2 dimensional array that is 15x15 and an
 * enumerated data type status variable that identifies the state of the
 * game. Markers on the game board include e for empty and x or o when the
 * space is claimed by that player. The  makeMove function determines if a
 * desired space is within the range of the board and if the space is
 * already occupied. If not then the function determines if that move
 * results in 5 consecutive markers, which changes the status of the game
 * in favore of the winner.
***************************************/

#include "GBoard.hpp"



//default constructor initializes every element of array to e for empty
//and the gameState to unfinished.
GBoard::GBoard()
{
     for(int row = 0; row < 15; row++)
     {
          for(int column = 0; column < 15; column++)
          {    boardArray[row][column] = 'e';}
     }

     gameState = UNFINISHED;
}



//returns the current value of gameState
enum Status GBoard::getGameState()
{    return gameState;}



//Debugging tool for printing elements of array as needed
char GBoard::getMarker(int row, int column)
{    return boardArray[row][column];}



//If the arguments passed for row and column are within range and that
//element is empty, it is reassigned to char of that player and boolean
//returns true. updateGameState function called.
bool GBoard::makeMove(int row, int column, char player)
{
     bool move;

     if(row < 15 && column < 15 && boardArray[row][column] == 'e')
     {
          boardArray[row][column] = player;
          move = true;
     }
     else
     {    move = false;}

     if(move && gameState == UNFINISHED)
     {    updateGameState(player);}

     return move;
}



//Receives char of player who most recently moved. Function calls a variety
//of recurseive functions aa it iterates through each element of the array
//using 2 for loops. If a streak of 5 is found, gameState is changed. If
//gameState remains UNFINISHED then the last function determines a DRAW
void GBoard::updateGameState(char player)
{
          for(int row = 0; row < 15; row++)
          {
               for(int column = 0; column < 15; column++)
               {
                    horizontalWin(row, column, 0, player);
                    verticalWin(row, column, 0, player);
                    forwardDownWin(row, column, 0, player);
                    backwardDownWin(row, column, 0, player);
                    checkForDraw();
               }
          }
}


//The next 4 functions are recursions. They continue and streak increases
//until streak reaches 5 or the streak is broken
void GBoard::horizontalWin(int row, int column, int streak, char player)
{
     if(streak == 5)
     {
          if(player == 'x')
          {    gameState = X_WON;}
          else if(player == 'o')
          {    gameState = O_WON;}
     }
     else if(row < 15 && column < 15 && streak < 5)
     {
          if(boardArray[row][column] == player)
          {    horizontalWin(row, column + 1, streak + 1, player);}   //only moves right
     }
}



void GBoard::verticalWin(int row, int column, int streak, char player)
{
     if(streak == 5)
     {
          if(player == 'x')
          {    gameState = X_WON;}
          else if(player == 'o')
          {    gameState = O_WON;}
     }
     else if(row < 15 && column < 15 && streak < 5)
     {
          if(boardArray[row][column] == player)
          {    verticalWin(row + 1, column, streak + 1, player);}   //only scans down
     }
}



void GBoard::forwardDownWin(int row, int column, int streak, char player)
{
     if(streak == 5)
     {
          if(player == 'x')
          {    gameState = X_WON;}
          else if(player == 'o')
          {    gameState = O_WON;}
     }
     else if(row < 15 && row >= 0 && column < 15 && column >= 0 && streak < 5)
     {
          if(boardArray[row][column] == player)
          {    forwardDownWin(row + 1, column + 1, streak + 1, player);}   //scans down & right
     }
}



void GBoard::backwardDownWin(int row, int column, int streak, char player)
{
     if(streak == 5)
     {
          if(player == 'x')
          {    gameState = X_WON;}
          else if(player == 'o')
          {    gameState = O_WON;}
     }
     else if(row < 15 && row >= 0 && column < 15 && column >= 0 && streak < 5)
     {
          if(boardArray[row][column] == player)
          {    backwardDownWin(row + 1, column - 1, streak + 1, player);}   //scans down and left
     }
}


//Only runs after the entire board has been scanned and no winner found. The function
//scans for empty spaces. If none are left the gameState changed to DRAW.
void GBoard::checkForDraw()
{
     if(gameState == UNFINISHED)
     {
          int count = 0;

          for(int row = 0; row < 15; row++)
          {
               for(int column = 0; column < 15; column++)
               {
		       if(boardArray[row][column] == 'e')
                    {    count += 1;}
               }
          }
          if(count == 0)
          {    gameState = DRAW;}
     }
}
