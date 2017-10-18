#include <iostream>
#include <iomanip>
using namespace std;

class Price { // setting up my classes
  public:
    void print();
    void seStatePrice(double statePrice); //LINES 8-11 MUTATORS
    void setCountyPrice(double countyPrice);
    void setCityPrice(double cityPrice);
    void setPriceSpecial(double priceSpecial);
    
    double getSatePrice(); //LINES 13-16 ACCESSORS
    double getCountyPrice();
    double getCityPrice();
    double getPriceSpecial();
  
  private:
    double _statePrice;
    double _countyPrice;
    double _cityPrice;
    double _priceSpecial;
};

void Price::print(double amount)   // having my outsputs for city, state, couty, specail 
  cout << "\nState Price: " << _statePrice <<
   "\nCounty Price: " << _countyPrice <<
   "\nCity Price: " << _cityPrice <<
   "\nPrice Special: " << _priceSpecial << 
   "\nTotal: " << fixed << setprecision(2) <<
   ((_statePrice + _countyPrice + _cityPrice + _priceSpecial) * amount) + amount <<
   endl << endl;
 // my equation to get my total price.
 }
 
 void Price::setStatePrice(double statePrice) {
     _statePrice = statePrice;
 }
 
 void Price::setCountyPrice(double countyPrice) {
     _countyPrice = countyPrice;
 }
void Price::setCityPrice(double cityPrice) {
    _cityPrice = cityPrice;
}
void Price::setPriceSpecial(double priceSpecial) {
    _priceSpecial = priceSpecial;
}
double Price::getStatePrice() {
    return _statePrice;
}
double Price::getCountyPrice() {
    return _countyPrice;
}
double Price::getCityPrice() {
    return _cityPrice;
}
double Price::getPriceSpecial() {
    return _priceSpecial;
}

// main functions


int main() {
    Price price1, price2, price3, price4, price5; // each city, state, county, special
    double amount = 0.0;
    
    //Setting one set
    price1.setStatePrice(0.06);
    price1.setCountyPrice(0.0025);
    price1.setCityPrice(0.00);
    price1.setPriceSpecial(0.01);
    
    //setting second set
    price2.setStatePrice(0.06);
    price2.setCountyPrice(0.0025);
    price2.setCityPrice(0.05);
    price2.setPriceSpecial(0.01);
    
    //setting thied set
    price3.setStatePrice(0.06);
    price3.setCountyPrice(0.0025);
    price3.setCityPrice(0.05);
    price3.setPriceSpecial(0.015);
    
    //setting forth set
    price4.setStatePrice(0.046);
    price4.setCountyPrice(0.0365);
    price4.setCityPrice(0.0);
    price4.setPriceSpecial(0.0);
    
    //setting fifth set
    price5.setStatePrice(0.056);
    price5.setCountyPrice(0.007);
    price5.setCityPrice(0.023);
    price5.setPriceSpecial(0.0);
    
    //I wanted to try a loop so this would be out of context of what was taught in the class as of now...
    for (int i=0;i<10;i++) {
        cout << "\n Enter and amount: ";
        cint >> amount;
        
    //outputting each amount
    cout << "Price 1: ";
    cout << "===========";
    price1.print(amount);
    
    cout << "Price 2: ";
    cout << "=============";
    price2.print(amount);
    
    cout << "Price 3: ";
    cout << "=============";
    prine3.print(amount);
    
    cout << "Price 4: ";
    cout << "============";
    price4.print(amount);
    
    cout << "Price 5: ";
    cout << "============";
    price5.print(amount);
    }
    
    return 0;
    
}

}