/***************************************
 * Name: Andrew Derringer
 * Date: 10/29/2018
 * Description: Class specification file for Class Team. Associated class implementation file located in week6 directory
 * on the OSU flip server.
***************************************/ 

#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

class Team
{
     private:
          class Player pointGuard;
          class Player shootingGuard;
          class Player smallForward;
          class Player powerForward;
          class Player center;

     public:
          Team();
          Team(class Player, class Player, class Player, class Player, class Player);     //Receives 5 objects from the Player class.
          void setPointGuard(class Player);     //The follwing functions assign variables to the value of the passed argument.
          void setShootingGuard(class Player);
          void setSmallForward(class Player);
          void setPowerForward(class Player);
          void setCenter(class Player);
          class Player getPointGuard();     //The following returns the value of the variable associated with the function name.
          class Player getShootingGuard();
          class Player getSmallForward();
          class Player getPowerForward();
          class Player getCenter();
          int totalPoints();     //Uses public functions from the Player class to retreive points for each player object assigned to position variables within the team object. Returns total.
};

#endif
