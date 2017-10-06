#include <iostream>
using namespace std;

class price { //applying my private/public class
    public :
    void Print();
    void setStatePrice (double statePrice);
    void setCountyPrice (double countyPrice); 
    void setCityPrice (double cityPrice);
    void setPriceSpecial (double priceSpecial);
    
    double getStatePrice();
    double getCountyPrice();
    double getCityPrice();
    double getPriceSpecial();
    
    private :
    double _statePrice;
    double _countyPrice;
    double _cityPrice;
    double _pricespecial;
    
};

void price:: print(){ // starting my gets and sets
    cout << " \nState Price: "<<  << _statePrice << 
    "\nCounty Price: " << _countyPrice <<
    "\nCity Price: " << _cityPrice <<
    "\nPrice Special: " << _priceSpecial << endl;
    
}
void Price:: SetStatePrice (double statePrice){ 
_statePrice = statePrice;
}

void Price:: setCountyPrice (double countyPrice){
_countyPrice = countyPrice;
}

void Price:: setCityPrice ( double cityPrice){
_cityPrice = countyPrice;
}

void Price:: setPriceSpecial ( double priceSpecial){
_pricespecial = priceSpecial;

}

int main() {
    Price price1, price2, price3, price4, price5;  
    
    price1.setStatePrice ( 0.06 );
    price1.setCountyPrice ( 0.0025 );
    price1.setCityPrice ( 0.00 );
    price1.setPriceSpecial ( 0.01 );
    
    price1.print() ;
    
    price2.setStatePrice ( 0.06 );
    price2.setCountyPrice ( 0.0025 );
    price2.setCityPrice ( 0.005);
    price2.setPriceSpecial ( 0.01);
    
    price2.print() ; 
    
    price3.setStatePrice ( 0.06 );
    price3.setCountyPrice (0.0025);
    price3.setCityPrice (.005);
    price3.setPriceSpecial (0.015);
    
    price3.print();
    
    price4.SetState ( 0.046 );
    price4.SetCounty (0.0365);
    price4.SetCity ( 0.00 );
    price4.SetSpecial (0.00 );
    
    price4.print();
    
    price5.setStatePrice ( 0.056);
    price5.setCountyPrice (0.007);
    price5.setCityPrice (0.023);
    price5.setPriceSpecial (0.00);
    
    price5.print()
    
   cout << "\nEnter an amount: "; // user input amount
   cin >> amount;

 
   return 0;}
   




