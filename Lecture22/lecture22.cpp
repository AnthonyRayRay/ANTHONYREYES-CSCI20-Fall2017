#include <iostream>
#include <cstdlib> //*important
#include <ctime> //*important
using namespace std;

void guessingGame (); //? unclear of void

int main()//body
{
    cout<<"We are going to play the guessing game 3 times"<<endl;//declaration
    guessingGame();
    guessingGame();
    guessingGame();
}

void guessingGame () //important //?uncler of void
{
    srand(time(0));//body
    int randomNumber = rand() % (10 + 1); // Appropriatly placed ( ) //function call

    int userNumber = 0;
    cout<<"Please choose a number between 1 and 10:";
    cin>>userNumber;// declaration

    cout<<"You picked: "<<userNumber<<"  The number was: "<<randomNumber<<endl;
}

//Identify with //* 2-4 items that are important
//Identify with //? 2-4 items that are incorrect, unclear, or you have questions on.
//Comment the function appropriately
//Identify the following parts of the function:
//  definition
//  declaration
//  body
//  function call