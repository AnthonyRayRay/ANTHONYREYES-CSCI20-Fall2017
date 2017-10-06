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

  