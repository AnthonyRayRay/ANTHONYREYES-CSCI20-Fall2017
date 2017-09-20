#include <iostream>
#include <cmath> // we need this now for functions equations, yay~!
using namespace std;

int main () { // variables, variables, variables! YOU DO NOT NEED TO HAVE THE SRT OR POW AS A VARIABLE BECAUSE YOU'LL BE ATTACHING IT TO THE EQUATIONS.
  double velocity1;
  double tempF;
  double OldStyleWindChill;
  double NewStyleWindChill;
  double Difference;
  
  // cout and cin statements cin for my user to input.
  cout << "Insert a wind speed:";
  cin >> tempF;
  cout << "Insert a velocity number:";
  cin >> velocity1;
  
  //my equations I am placing for old formula, new formula, and difference.
  OldStyleWindChill = 0.081 * (3.71 * sqrt(velocity1)) + (5.81 -0.25) * (velocity1) * (tempF-91.4) + 91.4;
  NewStyleWindChill = 35.74 + (0.6215 * tempF) - (35.75 * (pow(velocity1 , 0.16)) ) + (0.4275 * tempF) ;
  Difference = OldStyleWindChill - NewStyleWindChill;
  
  cout << " Wind Speed       Old Formula         New Formula           Difference " << endl;
  cout << "---------------------------------------------------------------------------" << endl;
  cout <<   tempF << "                 " <<   OldStyleWindChill << "              " << NewStyleWindChill << "                  " << Difference << endl;
  return 0;
  
}
  