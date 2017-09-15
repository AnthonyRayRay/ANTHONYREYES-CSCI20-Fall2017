#include <iostream>
#include <math.h> // using to apply rounding because we are using coupons with
                  //  this to get a new total from the taxes also.

using namespace std;

struct PriceOfYogurt { // my object and below the object will be the properties.
  double amountOfOz;
  double amountOfToppings;
  double totalcouponAdded;
  double totalcaliforniaTaxes = 0.0725;
};

int main () { // getting my intergers for this code.
  PriceOfYogurt Yogurt;
  int amount1;
  int amount2;
  double couponAmount;
  double tip = 0.00; // Just incase there is no tip
  double amount4;
  double pricePerOz = 0.17;
  double priceEachToppings = 0.50;
  double couponAndBoth;
  double newTotal;
  double priceOfYogurt;
  double totalForBoth;
  
  // Will have the user enter the amount of oz, amount of toppings, 
  // and coupon value to get the price of yogurt.
  cout << "\nEnter amount of Oz: ";
  cin >> amount1;
  cout << "\nEnter amount of toppings: ";
  cin >> amount2;
  cout << "\nEnter the coupon value: ";
  cin >> couponAmount;
  cout << "\nEnter tip amount (0.15 for 15 cents): ";
  cin >> tip;
  
  // My equations for how I am getting the priceOfYogurt.
  Yogurt.amountOfOz = amount1 * pricePerOz; 
  Yogurt.amountOfToppings = priceEachToppings * amount2; 
  totalForBoth = Yogurt.amountOfOz + Yogurt.amountOfToppings;
  couponAndBoth = roundf(((couponAmount/100) * totalForBoth) * 100) / 100;
  newTotal = totalForBoth - couponAndBoth;
  amount4 = newTotal * Yogurt.totalcaliforniaTaxes;  
  priceOfYogurt = roundf(((newTotal - amount4) + tip) * 100) / 100;
  //roundf(val * 100) / 100
  
  cout << " Your had paid "  << "$" << priceOfYogurt << " after applying your " <<
    couponAmount << "% coupon, you have saved," << " $" << couponAndBoth << " ,have a great day. ";
  
  return 0;
}