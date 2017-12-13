#include <iostream>
using namespace std;

int main()
{
    int number = 1;// it'll need to be from 12 to 1
    while (number<=10) // while (int i=0;i<10;i++)
    {
        cout<<number;
        number = number + 1;// will add to the number to see if the number is added by 1
    }
    
    int userNumber = 0, x = 1;
    cout<<"Enter a number: ";
    cin>>userNumber;
    
    while(x <= usernumber)
    {
        if (x%10 == 0) // x modular 10 equals a mutliple of 10 if has an endline. declaring
        {
            cout<<x<<endl;;
        }
        else
        {
            cout<<x<<" "; // x is
        }
        x++;
    }
}
 