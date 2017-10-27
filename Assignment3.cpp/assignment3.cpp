#include <iostream>
#include "Computer.cpp" // bringing in file computer.cpp
#include "Player.cpp" // bringing in file computer.cpp
#include <time.h> // setting up time to hep with RNG
#include <stdlib> //setting up random number generator
using namespace std


  int rollDice() {
       //RNG
       srand(NULL));
       return rand() % 6 + 1;
}
  
  
  int main() {
  if (rollDice == 0) {
      cout << "Player has 0 points and is now next players turn" << endl;
      
  }
  
  if (rollDice > 0 ) {
      cout << "Player has " << points_ << " would you like to keep playing :)? Yes or No." << endl;
      
  }
  
  if (rollDice== 100) {
      cout << "You won, good game :D!" << endl;
      
  }