 // This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> // the first thing was that the iostream was below tghis making the input and outputs not work
using namespace std; 
int main() {
        // Read a character in
        char ch;
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??
        if ((ch >= 'A') && (ch <= 'Z')) { //didn't need to have multiple else if statements for this added && statements, had to change the <= to >= for ch >='A'
                                          // a > A going off of the Ascii table.
               cout << "Yes, that is a uppercase letter." << endl;
            
        }
       else if ((ch >= 'a') && (ch <= 'z')) { //didn't need multiple lines for this and added && statments
               cout << "Yes, that is a lowercase letter" << endl;
            
        }        else {
            cout << "Not a letter" << endl;
        }
          return 0; } // fixed bracktes in lines to make it more clean.
          //debugging is important to programmers because it gives programmers the opportunity to solve the problems of why their code will not run. 
         
         