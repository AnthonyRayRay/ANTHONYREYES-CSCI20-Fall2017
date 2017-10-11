#include <iostream>
using namespace std;

class price {
    public :
    void Print();
    void SetState (double priceState);
    void SetCounty (double priceCounty); 
    void SetCity (double priceCity);
    void SetSpecial (double priceSpecial);
    
    double GetState();
    double GetCounty();
    double GetCity();
    double GetSpecial();
    
    private :
    double state_;
    double county_;
    double city_;
    double special_;
    
};

void price:: Print(){
    cout << state_ << " " << county_ << " " << city_ << " " << special_ << endl;
    
}
void price:: SetState (double priceState){
state_ = priceState;
return;
}
void price:: SetCounty (double priceCounty){
county_ = priceCounty;
return;
}
void price:: SetCity ( double priceCity){
city_ = priceCity;
return;
}
void price:: SetSpecial ( double priceSpecial){
special_ = priceSpecial;
return;
}
int main() {
    price price1 ; 
    
    price1.SetState ( 0.06 );
    price1.SetCounty ( 0.0025 );
    price1.SetCity ( 0.00 );
    price1.SetSpecial ( 0.01 );
    
    price price2 ;
    
    price2.SetState ( 0.06 );
    price2.SetCounty ( 0.0025 );
    price2.SetCity ( 0.005);
    price2.SetSpecial ( 0.01);
    
    price price3 ; 
    
    price3.SetState ( 0.06 );
    price3.SetCounty (0.0025);
    price3.SetCity (.005);
    price3.SetSpecial (0.015);
    
    price price4;
    
    price4.SetState ( 0.046 );
    price4.SetCounty (0.0365);
    price4.SetCity ( 0.00 );
    price4.SetSpecial (0.00 );
    
    price price5;
    
    price5.SetState ( 0.056);
    price5.SetCounty (0.007);
    price5.SetCity (0.023);
    price5.SetSpecial (0.00);
    
  cout << price1.GetState() << price1.GetCounty() << "  " << price1.GetCity() << price1.GetSpecial() << endl; 
  cout << price2.GetState() << price2.GetCounty() << "  " << price2.GetCity() << price2.GetSpecial() << endl; 
  cout << price3.GetState() << price3.GetCounty() << "  " << price3.GetCity() << price3.GetSpecial() << endl; 
  cout << price4.GetState() << price4.GetCounty() << "  " << price4.GetCity() << price4.GetSpecial() << endl; 
  cout << price5.GetState() << price5.GetCounty() << "  " << price5.GetCity() << price5.GetSpecial() << endl; 
  

 
   return 0;}
   




