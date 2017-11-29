#include <iostream> // we don't need two #include <iostream>
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[];// This is the pointer but shouldn't it be myPtr??

    cout << "Please enter a 10 letter word or less" << endl; // array next to this and new char
    cin >> name; // needs to dereferenced because of the name being a pointer.

    char * head  = name; // Dereference Operator ?
    char * tail = name; //  Dereference Operator ?
    nameLength = strlen(*name);//IS THIS PART OF A C-STRING MODIFICATION FUNCTION?

    cout << "Your word is " << firststr << endl; // not the right variable

    if (nameLength<10) // Needs to be less than or equal too.
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; // reference operator

     if (nameLength < 10) // if statement
     {
          while (tail != name) // while statement
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1]; // reference operator

     head++;
     tail--;

     if (*head == *tail) // if statement 
     {
         cout << "It is an palindrome!" << endl;
     }
     else // if else statment
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}