/***************************************
 * Name: Andrew Derringer
 * Date: 10/29/2018
 * Description: The implementation file for the class Team. It's associated specification file is located in the week6 directory of the 
 * OSU flip server. The class is passed  5 objects from the player class. It assigns them to variables for positions on the team by
 * the order that they are received. Functions are available to return the object for a particular position and return the total points
 * scored by all the player objects within the team object.
***************************************/

#include "Team.hpp"

/***************************************
 * Description: receives 5 objects from the player class and assigns them to five variables representing the positions on the team.
***************************************/
Team::Team(class Player pg, class Player sg, class Player sf, class Player pf, class Player c)
{
     setPointGuard(pg);
     setShootingGuard(sg);
     setSmallForward(sf);
     setPowerForward(pf);
     setCenter(c);
}

/***************************************
 * Description: Assigns an object from the player class to the variable associated with the function name.
***************************************/
void Team::setPointGuard(class Player pg)
{    pointGuard = pg;}

/***************************************
 * Description: Assigns an object from the player class to the variable associated with the function name.
***************************************/
void Team::setShootingGuard(class Player sg)
{    shootingGuard = sg;}

/***************************************
 * Description: Assigns an object from the player class to the variable associated with the function name.
***************************************/
void Team::setSmallForward(class Player sf)
{    smallForward = sf;}

/***************************************
 * Description: Assigns an object from the player class to the variable associated with the function name.
***************************************/
void Team::setPowerForward(class Player pf)
{    powerForward = pf;}

/***************************************
 * Description: Assigns an object from the player class to the variable associated with the function name.
***************************************/
void Team::setCenter(class Player c)
{    center = c;}

/***************************************
 * Description: Returns the value of the object from the player class for the variable associated with the function name.
***************************************/
class Player Team::getPointGuard()
{    return pointGuard;}

/***************************************
 * Description: Returns the value of the object from the player class for the variable associated with the function name.
***************************************/
class Player Team::getShootingGuard()
{    return shootingGuard;}

/***************************************
 * Description: Returns the value of the object from the player class for the variable associated with the function name.
***************************************/
class Player Team::getSmallForward()
{    return smallForward;}

/***************************************
 * Description: Returns the value of the object from the player class for the variable associated with the function name.
***************************************/
class Player Team::getPowerForward()
{    return powerForward;}

/***************************************
 * Description: Returns the value of the object from the player class for the variable associated with the function name.
***************************************/
class Player Team::getCenter()
{    return center;}

/***************************************
 * Description: Uses public function getPoints from the player class to retreive the points for each player object assigned
 * to the variables within the team object. It then rturns the sum of the points for each player.
***************************************/
int Team::totalPoints()
{    return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();}


