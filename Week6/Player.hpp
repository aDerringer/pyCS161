/***************************************
 * Name: Andrew Derringer
 * Date: 10/29/2018
 * Description: Class specification file for Class Player. Associated class implementation file located
 * un week6 directory of flip OSY server.
***************************************/ 
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

using std:: string;

class Player
{
     private:
          string name;     //Name of player taken as a string variable, will require string library.
          int points;     //All other variables taken as integers or class.
          int rebounds;
          int assists;

     public:
          Player();     //default constructor assigns particular values to variables if argument not passed.
          Player(string, int, int, int); //Overloaded constructor assigns variables to passed arguments.
          void setPoints(int);     //Set functions allow arguments passed to assign value for individual variables.
          void setRebounds(int);
          void setAssists(int);
          string getName();     //Returns the variable associated with he title of the function.
          int getPoints();
          int getRebounds();
          int getAssists();
          bool hasMorePointsThan(class Player);     //Compares the points variable of two players.
};

#endif
