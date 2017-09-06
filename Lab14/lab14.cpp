  #include <iostream> 
  using namespace std;
  
  int main () {
    
    string quarterString, dimeString, nickelString, penniesString;
    // We have entered a certain amount of cents and will need to have the machine say how many of each coins were used to add up to the given number
    int quarter = 25;
    int dime = 10; 
    int nickel = 5; 
    int penny = 1; 
    int amountOfCoins;
    string change = "";

    int totalAmountOfQuarters = 0, totalAmountOfDimes = 0, totalAmountofNickels = 0, totalAmountofPennies = 0, totalCoins = 0;
  
    cout << "Enter number of coins: ";
    cin >> amountOfCoins;
    totalCoins = amountOfCoins;
   // This part is saying how many coins can go into the amount of coins
   // if it can then we will end up with an integer is not 
   // we will have a remainder , which we do not want a remainder because we are looking for whole amounts    
    if (totalCoins >= 25) {
        totalAmountOfQuarters = amountOfCoins/quarter;
        totalCoins = totalCoins - (totalAmountOfQuarters * quarter);
    }
    
    if (totalCoins >= 10) {
        totalAmountOfDimes = totalCoins/dime;
        totalCoins = totalCoins - (totalAmountOfDimes * dime);
    }
    
    if (totalCoins >= 5) {
        totalAmountofNickels = totalCoins/nickel;
        totalCoins = totalCoins - (totalAmountofNickels * nickel);
    }
    
    if (totalCoins >= 1) {
        totalAmountofPennies = totalCoins/penny;
        totalCoins = totalCoins - (totalAmountofPennies * penny);
    }
        //applying string to have our total amount of each coin be plural or singlular for the amount of each needed for the amountofcoins

    if (totalAmountOfQuarters == 1) {
        quarterString = " quarter, ";
    } else {
        quarterString = " quarters, ";
    }
    
    if (totalAmountOfDimes == 1) {
        dimeString = " dime, ";
    } else {
        dimeString = " dimes, ";
    }

    if (totalAmountofNickels == 1) {
        nickelString = " nickel ";
    } else {
        nickelString = " nickels, ";
    }
    
    if (totalAmountofPennies == 1) {
        penniesString = " penny ";
    } else {
        penniesString = " pennies, ";
    }
    
    
    cout << "\nYou have entered " << amountOfCoins << " cents." << endl;
    cout << "\nThat was " << totalAmountOfQuarters << quarterString <<
      totalAmountOfDimes << dimeString << totalAmountofNickels <<
      nickelString << " and " << totalAmountofPennies << penniesString << endl;
    int percentTotal = amountOfCoins * 0.109;
      
    if ((amountOfCoins % 100) < 10) {
       cout << "\nThe total is $" << (amountOfCoins/100) << ".0" << 
         amountOfCoins % 100 << " After the fee you get $0." << amountOfCoins - percentTotal  << " cash" << endl;
    } else {
       cout << "\nThe total is $" << (amountOfCoins/100) << "." << 
         amountOfCoins % 100 << " After the fee you get $0." << amountOfCoins - percentTotal << " cash" << endl;
    }
  
    return 0;
  }
  
  
  
  
    
  
 
  
  