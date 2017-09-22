#include <iostream>
#include <cstdlib> //header used for  random number generaters
#include <ctime> 
using namespace std;

void number1 (); // when we place void down this means that there is no return type or number

int main()
{
   
    number1();// without this we will end up with no output and this () is how we're going to get out random number

}

void number1 () 
{
    srand(time(0));//turns a random integer each time the function is called, in the range 0 to randomNumber.
    int randomNumber = rand() % (1 + 100);  // My specific range of what number I am wanting. In this case we are wanting the random number to be bewteen 1-100 and also 1 and 100 if possible.

    int userNumber = 0;
    
    cout<<"Your random number is: "<<randomNumber<< endl;
    

}