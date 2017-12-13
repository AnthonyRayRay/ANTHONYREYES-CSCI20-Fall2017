/ Program to store 10 integers array

#include <iostream>
#include <stdio.h>

using namespace std;

int getArray(int x[]);
int reverseArray(int x[], int);

int main ()
{
  int a[5];

 	int e = getArray(a);
	int s = reverseArray(a,5);

  return 0;
}

int getArray(int x[])
{
	int userInput;
	
	for (int count = 0; count < 5; count ++)
	{
		cout << "Please enter 5 numbers: ";
		cin >> userInput;
		
		userInput = x[5];

	}
	
}

int reverseArray(int a[], int i )
{
	int n = 5;
        cout << "The reverse order: " << endl;
       
        for(int i=n-1; i>=0; i--)
        {
            cout << a[i] << ' ';
        }
}
