#include<iostream>

using namespace std;

class Computer {

  private:
    int _score;

  public:

    Computer() { _score = 0;}
    Computer(int score) { _score = score;}

    void SetScore(int score) { _score = score;}
    void ResetScore() { _score = 0;}
    void GetScore() {_score = 0;}
    void PrintScore() {_score = 0;}
    
    
};