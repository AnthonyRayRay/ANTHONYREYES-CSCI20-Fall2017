#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



// Program starts here
int main() {
  // Create a MyClass Object //not delcared
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber()); // not declared

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}