#include "DividendStock.h"

/** Initializes new dividend stock using normal Stock constructor with and inputting
 * Parameter values, sets sharePrice and dividends value to 0.0 as default
* @param symbol is the name of the dividend stock
* @param sharePrice price of a share, default value of 0.0
*/
DividendStock::DividendStock(std::string symbol, double sharePrice)
    :Stock(symbol, sharePrice){
        dividends = 0.0;
}

/** adds the divident amount to the total dividends
* @param amountPerShare
*/
void DividendStock::PayDividend(double amountPerShare){
    dividends += amountPerShare * shares;
}

/** Adds Stock class GetMarketValue function + dividends
* @return the market value + the dividends to calculate new market value
*/
double DividendStock::GetMarketValue() const{
    return (Stock::GetMarketValue() + dividends);
}


int main(){
    DividendStock testingDividend("sixtyseven", 67.0);
    std::cout << testingDividend.GetSymbol() << std::endl;
    std::cout << testingDividend.GetSharePrice() << std::endl;
    std::cout << testingDividend.GetCost() << std::endl;
}