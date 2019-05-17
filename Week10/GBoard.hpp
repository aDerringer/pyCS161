/***************************************
 * Name: Andrew Derringer
 * Date: 11/26/2018
 * Description: GBoard class specification file. Class contains two private
 * variables including a char type 2 dimensional array that is 15x15 and an
 * enumerated data type status variable that identifies the state of the
 * game. Markers on the game board include e for empty and x or o when the
 * space is claimed by that player. The  makeMove function determines if a
 * desired space is within the range of the board and if the space is
 * already occupied. If not then the function determines if that move
 * results in 5 consecutive markers, which changes the status of the game
 * in favore of the winner.
***************************************/

#ifndef GBOARD_HPP
#define GBOARD_HPP

enum Status {X_WON, O_WON, DRAW, UNFINISHED};

class GBoard
{
     private:
          char boardArray[15][15];
          Status gameState;

          void updateGameState(char player);
          void horizontalWin(int row, int column, int streak, char player);
          void verticalWin(int row, int column, int streak, char player);
          void forwardDownWin(int row, int column, int streak, char player);
          void backwardDownWin(int row, int column, int streak, char player);
          void checkForDraw();

     public:
          GBoard();
          Status getGameState();
          bool makeMove(int row, int column, char player);
          char getMarker(int row, int column);
};

#endif
