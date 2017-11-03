#include<iostream>
#include "Computer.cpp"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int rollDice() {
  // Random number generator between 1 - 6, this will be a six sided dice
  srand(time(NULL));
  return rand() % 6 + 1;
}

int main() {
  // how the game will run 
  Computer* player1 = new Computer();
  Computer* computer = new Computer();
  bool gameContinue = true;
  char shouldContinue;
  int diceRollComputer, diceRoll;
  unsigned int sleep(unsigned int seconds);

  // Game play start.
  while(gameContinue) {
    if (player1->GetScore() >= 100 && computer->GetScore() < player1->GetScore()) { //dragging computer.cpp
      cout << "\nYou win, computer loses!!" << endl;
      player1->ResetScore();
      computer->ResetScore();
    }

    if (computer->GetScore() >= 100 && player1->GetScore() < computer->GetScore()) { //dragging computer.cpp
      cout << "\nComuter wins, you lost!!" << endl;
      player1->ResetScore();
      computer->ResetScore();
    }
    cout << "Enter 'y' to roll dice, enter 'n' to exit" << endl;
    cin >> shouldContinue;
    diceRoll = rollDice();
    if (shouldContinue != 'n' && shouldContinue != 'N') {
      cout << "You rolled a " << diceRoll << endl;
      if(diceRoll == 1) {
        player1->ResetScore();
      } else {
        player1->SetScore(player1->GetScore() + diceRoll);
      }

      sleep(1);
      diceRollComputer = rollDice();
      if(diceRollComputer == 1) {
        computer->ResetScore();
      } else {
        computer->SetScore(computer->GetScore() + diceRollComputer);
      }
      cout << "\nYour ";
      player1->PrintScore();
      cout << "\nComputers ";
      computer->PrintScore();
    } else { return 0;}
  

  return 0;
}






};
