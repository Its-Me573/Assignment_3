#include "Stock.h"

/** initializes a Stock object with default values and a symbol for a stock
* @param symbol is the representation of the stock name
* @param sharePrice is the price of the share, default value of 0.0 
*/
Stock::Stock(std::string symbol, double sharePrice = 0.0){
    this->symbol = symbol;
    this->sharePrice = sharePrice;
    shares = 0;
}

/** add new bought shares to total shares, increment the cost with share number * new sharePrice
 * @param shares is the number of shares bought
 * @param sharePrice is the price of new shares bought
*/
void Stock::Purchase(int shares, double sharePrice){
    this->shares += shares;
    this->cost =+ this->shares*sharePrice;
}

/** return the symbol of the stock
* @return the symbol of the stock 
*/
std::string Stock::GetSymbol() const{
    return this->symbol;
}



