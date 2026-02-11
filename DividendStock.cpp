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

/** Returns the total dividends accumulated
* @return value of dividends
*/
double DividendStock::GetDividends() const{
    return dividends;
}

void DividendStock::Print() const{
    std::cout << "DividendStock (" << GetSymbol() << "):" << std::endl;
    std::cout << " value: $ " << std::fixed << std::setprecision(2) << GetMarketValue() << std::endl;
    std::cout << "  cost: $ " << std::fixed << std::setprecision(2) << GetCost() << std::endl;
    std::cout << "profit: $ " << std::fixed << std::setprecision(2) << GetProfit() << std::endl;
}



int main(){
    DividendStock testingDividend("sixtyseven", 67.0);
    std::cout << testingDividend.GetSymbol() << std::endl;
    std::cout << testingDividend.GetSharePrice() << std::endl;
    std::cout << testingDividend.GetCost() << std::endl;
}