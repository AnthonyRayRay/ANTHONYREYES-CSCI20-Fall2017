 #include <iostream>
using namespace std;

int main()
{
    int alpha = 5;
int beta = 20;

int * alphaPtr = &alpha; // swap /pointer
int * betaPtr = &beta; //swap  /pointer

cout<<*alphaPtr<<endl; // assigning points for alphaPtr
cout<<*betaPtr<<endl; // assigning points for betaPTR

*alphaPtr += 5; // afdding 5 to alphaPtr * assigning pointer
betaPtr = alphaPtr; // stating that the swap is appicable

cout<<*alphaPtr<<endl; // outputting 
cout<<*betaPtr<<endl; // outputting
}

//Comment each line of code.  Explain what it is doing.  What value is held there.
//Why is it doing what it is doing?