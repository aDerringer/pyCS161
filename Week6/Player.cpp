/***************************************
 * Name: Andrew Derringer
 * Date: 10/29/2018
 * Description: The implementation file for the Class Player. Its associated specification file is located in the week6 directory
 * of the OSU flip server. This class assigns variables to objects, allowing them to be passed all at once or to be be adjusted 
 * manually, and provides functions that return the values for that object. It lso allows the points variable of an object to be 
 * compared to that of another object that is passed as the argument.
***************************************/
#include "Player.hpp"

/***************************************
 * Description: The default constructor for the object. Assigns values to variables if no arguments are passed.
***************************************/
Player::Player()
{
     name = "";
     points = -100;
     rebounds = -100;
     assists = -100;
}

/***************************************
 * Description: Overloading constructor for the object. Receives arguments for each of the 4 variables.
***************************************/
Player::Player(string n, int pt, int reb, int ast)
{
     name = n;
     setPoints(pt);
     setRebounds(reb);
     setAssists(ast);
}

/***************************************
 * Description: Sets the value of the variable associated with its name to the argument that is passed.
***************************************/
void Player::setPoints(int pt)
{    points = pt;}

/***************************************
 * Description: Sets the value of the variable associated with its name to the argument that is passed.
***************************************/
void Player::setRebounds(int reb)
{    rebounds = reb;}

/***************************************
 * Description: Sets the value of the variable associated with its name to the argument that is passed.
***************************************/
void Player::setAssists(int ast)
{    assists = ast;}

/***************************************
 * Description: Returns the value of the variable associated with the name of the function.
***************************************/
string Player::getName()
{    return name;}

/***************************************
 * Description: Returns the value of the variable associated with the name of the function.
***************************************/
int Player::getPoints()
{    return points;}

/***************************************
 * Description: Returns the value of the variable associated with the name of the function.
***************************************/
int Player::getRebounds()
{    return rebounds;}

/***************************************
 * Description: Returns the value of the variable associated with the name of the function.
***************************************/
int Player::getAssists()
{    return assists;}

/***************************************
 * Description: Compares the points variable of the object executing the function to that of another
 * passed as an argument. If the executing object has more point then the function returns true, otherwise
 * it returns false.
***************************************/
bool Player::hasMorePointsThan(class Player alias)
{
     if(points > alias.getPoints())
          return true;
     else
          return false;
}
