#include<iostream>

using namespace std;

class TemperatureConverter {

  float kelvin_;

  public:
    // Constructors
    TemperatureConverter(){kelvin_ = 0;}
    TemperatureConverter(float kelvin){kelvin_ = kelvin;}

    // Setters
    void SetTempFromKelvin(float kelvin){kelvin_ = kelvin;}
    void SetTempFromCelsius(float celsius){
      if(celsius <= -273.15) {
        cout << "\nEnter higher number then -273.15: "; // telling user to input a number above -273.15
        cin >> celsius;
      }
      kelvin_ = celsius + 273.15;
    }
    void SetTempFromFahrenheit(float fahrenheit){
      if(fahrenheit <= -459.67) {
        cout << "\nEnter higher number then -459.67: ";
        cin >> fahrenheit;
      }
      kelvin_ = (5*(fahrenheit - 32)/9) + 273.15;
    }

    // Getters
    float GetTempFromKelvin(){return kelvin_;}
    float GetTempAsCelsius(){
      return kelvin_ - 273.15;
    }
    float GetTempAsFahrenheit(){
      return (((kelvin_ - 273.15)*9)/5 + 32);
    }

    // Print
    void PrintTemperatures(){
      cout << "\nKelvin: " << kelvin_;
      cout << "\nFahrenheit: " << TemperatureConverter::GetTempAsFahrenheit();
      cout << "\nCelsius: " << TemperatureConverter::GetTempAsCelsius();
    }
};
   
 
  

  
 #include<iostream>
#include "lab35.cpp"
using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}
  
  
  
