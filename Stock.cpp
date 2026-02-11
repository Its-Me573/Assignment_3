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

void Stock::Purchase(int shares, double sharePrice){
    this->shares += shares;
    this->cost =+ this->shares*sharePrice;
}

