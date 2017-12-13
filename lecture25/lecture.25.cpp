#include <iostream>
using namespace std;

class Salary //data field
{
    private: 
        double annual_;
    public: 
        void SetAnnualSalary(double salary)//mutator function
        {
            annual_ = salary;// accessor fundction
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

//Comment the class per the class style guide
//Identify the following parts of the class
//      data field
//      mutator function
//      accessor function
//Create a main function that creates an object and runs all of the functions in order
     class Salary //data field
{
    private: 
        double annual_;
        
    public: 
        double GetAnnualSalary()
        void SetAnnualSalary(double salary)//mutator function
        
            annual_ = salary;// accessor fundction
        
        
            return annual_;
        
        void Print()
        
             cout<<"$"<<annual_<<endl;
}