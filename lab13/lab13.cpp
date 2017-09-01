#include <iostream> 
using namespace std;

int main () {

  int birthPerYear, deathsPerYear, migrationPerYear, netGainPersonPerYear, totalPerYear, total;
  int years, newYear;
  
  // Current population as of July 2017.
  int currentPopulation = 325365189;
  cout << "Enter Years: ";
  cin >> years; // Getting input to enter years.

  // Calculations to figure how many people we'd gain 
  // in a year by multiplying seconds by minute by hours 
  // by days in a year divided by seconds it take for it to happen
  birthPerYear = (60 * 60 * 24 * 365)/8;
  deathsPerYear = (60 * 60 * 24 * 365)/12;
  migrationPerYear = (60 * 60 * 24 * 365)/33;
  netGainPersonPerYear = (60 * 60 *24 * 365)/12;
  
  totalPerYear = birthPerYear + deathsPerYear + migrationPerYear + netGainPersonPerYear;
  total = totalPerYear * years + currentPopulation;
  newYear = 2017 + years;
  
  // Outputting population..
  cout << endl << "In the year " << newYear << " the population will be " << total << " in the United States.";
  return 0;
}