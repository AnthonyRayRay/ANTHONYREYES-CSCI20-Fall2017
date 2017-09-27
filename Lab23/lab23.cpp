#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int randomNumberGenerator( int a, int b ); //parameter
void swapNumbers ( int &, int &); //variable

int main (){
  int a, b, randomNumber ; // getting input from user
                           // And output
    
    
    cout << "Enter value of A:" << endl;
    cin >> a;
    cout << "Enter value of B:" << endl ;
    cin >> b;
    swapNumbers(a, b); //wap two numbers without using a temporary variable.
    randomNumber = randomNumberGenerator (a, b);
   cout<<"A random number between "<< a <<" and "<< b << " is " << randomNumber << endl;
}

void swapNumbers (int &a, int &b) { // swapping values
   
  
  int temp;
  temp = a;
  a = b;
  b = temp;
   
}

int randomNumberGenerator(int min, int max) {
    if (min > max) swapNumbers(min, max);
    srand (time(NULL)); // wasn't generating with 0 and had to see about NULL to get that random number
                        // too much on this part 
    return rand()%(max-min +1) + min; //constant defined kinda confused about this from cplusplus
                                      // So we can get the random number between the input placed in by the user
}