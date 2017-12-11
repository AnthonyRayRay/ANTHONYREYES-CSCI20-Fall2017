#include <iostream> // we don't need two #include <iostream>
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[];

    cout << "Please enter a 10 letter word or less" << endl; // Prompting for a 10 letter word or less.
    cin >> name; // Storing the user input into the array 'name'.

    char * head  = name; // Pointer variable to keep track of head.
    char * tail = name; //  Pointer variable to keep track of tail.
    nameLength = strlen(*name); // When using strlen the variable should be passed in normally
    // Example: nameLength = strlen(name);

    cout << "Your word is " << firststr << endl; // firststr is not defined.

    if (nameLength<10) // Needs to be less than 10.
    {
         while (*head != '\0') // checking that head is not at the end.
         {
                cout << *head; // should just be cout << head;
                head++; // Head should be reassigned to the next char in the array. (like a linked list)
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; // referencing a char in the name array.

     if (nameLength < 10) // checking that nameLength is less than 10.
     {
          while (tail != name)
          {
                 cout << *tail; // should be cout << tail;
                 tail--; // this should be reassigned to the previous.
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