#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int randomNumberGenerator( int a, int b );
void swapNumbers ( int &, int &); 

int main (){
  int a, b, randomNumber ; 
    
    
    cout << "Enter value of A:" << endl;
    cin >> a;
    cout << "Enter value of B:" << endl ;
    cin >> b;
    swapNumbers(a, b); 
    randomNumber = randomNumberGenerator (a, b);
   cout<<"A random number between "<< a <<" and "<< b << " is " << randomNumber << endl;
}

void swapNumbers (int &a, int &b) { 
  

  
  int temp;
  temp = a;
  a = b;
  b = temp;
   
}

int randomNumberGenerator(int min, int max) {
    if (min > max) swapNumbers(min, max);
    srand (time(NULL)); 
    return rand()%(max-min +1) + min; 
}


    
    // Converts
double KiloInToPounds (int kilos, int pounds) {
   const double kilos = ;
   const int pounds = 0.45359237 ;
   int totPounds = 0;
   double totKilos = 0.0;
   
   totPounds = (pounds * kilos) + pounds; // Total pounds
   totkilos = kilos / pounds;                 // Conv pounds into kilo
   return cmVal;
}

int main() {
   double totkilos = 0;  // User defined kilos
   double totpounds = 0;  // User defined pounds
   
   // Prompt user for pounds/kilos
   cout << "Enter kilometers: ";
   cin >> kilos;
   
   cout << "Enter pounds: ";
   cin >> totPounds;
   
   // Output converted kilos/pounds to final pounds
   cout << "Pounds: ";
   cout << totPounds( double kilos, double pounds) << endl;
   
   return 0;
}

// INCOMPLETE, WASN'T FEELING WELL AFTER CLASS AND DON'T WANT THIS ASSIGNMENT TO BE LATE. 
// WILL NEED TO FIX MY FUNCTION AND ACTUALLY HAVE THIS PRGRAM RUNNING CORRECTLY 
// PREVIOSLY DEFINED FOR INT MAIN () 
//home/ubuntu/workspace/lab24/lab24.cpp:67:23: error: expected primary-expression before ‘double’
    //cout << totPounds( double kilos, double pounds) << endl;
                       ^
//home/ubuntu/workspace/lab24/lab24.cpp:67:37: error: expected primary-expression before ‘double’
   // cout << totPounds( double kilos, double pounds) << endl;