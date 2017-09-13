  #include <iostream>
  using namespace std;
  
  struct StockPortfolio { // Coming up with a struct for my object.....
    string stockname; 
    char sector;
    int numberOfSharesOwned;
    double currentSharePrice;
  };
  
  int main() {
      
    // Each vehcilce being recorded under StockPortfolio
    StockPortfolio Stock1, Stock2, Stock3, Stock4; 
    Stock1.stockname = "FordM";
    Stock1.sector = 'A';
    Stock1.numberOfSharesOwned = 87;
    Stock1.currentSharePrice = 18.76;
    
    Stock2.stockname = "Albertsn";
    Stock2.sector = 'C';
    Stock2.numberOfSharesOwned = 542;
    Stock2.currentSharePrice = 34.39;
    
    Stock3.stockname = "AAPL";
    Stock3.sector = 'T';
    Stock3.numberOfSharesOwned = 5;
    Stock3.currentSharePrice = 145.91;
    
    Stock4.stockname = "TSLA";
    Stock4.sector = 'A';
    Stock4.numberOfSharesOwned = 50;
    Stock4.currentSharePrice = 375.64;
    
    
    //Output of the following , "Stock name, No of Shares, No of Shares, Current, Total." Got Total value by (numberOfSharesOwned * currentSharePrice.)
    cout << "Stock Name         No of Shares          Current Value          Total Value" << endl;
    cout << "-----------       ---------------       ---------------        -------------" << endl;
    cout << " " << Stock1.stockname << "                " << Stock1.numberOfSharesOwned << "                   " << Stock1.currentSharePrice << "                  " << Stock1.currentSharePrice * Stock1.numberOfSharesOwned << endl;
    cout << " " << Stock2.stockname << "            " << Stock2.numberOfSharesOwned << "                    " << Stock2.currentSharePrice << "                  " << Stock2.currentSharePrice * Stock2.numberOfSharesOwned << endl;
    cout << " " << Stock3.stockname << "                " << Stock3.numberOfSharesOwned << "                   " << Stock3.currentSharePrice << "                  " << Stock3.currentSharePrice * Stock3.numberOfSharesOwned << endl;
    cout << " " << Stock4.stockname << "                " << Stock4.numberOfSharesOwned << "                   " << Stock4.currentSharePrice << "                  " << Stock4.currentSharePrice * Stock4.numberOfSharesOwned << endl;
      
    return 0;
  };
  
