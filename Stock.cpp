#include "Stock.h"

/** initializes a Stock object with default values and a symbol for a stock
* @param symbol is the representation of the stock name
* @param sharePrice is the price of the share, default value of 0.0 
*/
Stock::Stock(std::string symbol, double sharePrice){
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
    cost =+ this->shares*sharePrice;
}

/** return the symbol of the stock
* @return the symbol of the stock 
*/
std::string Stock::GetSymbol() const{
    return symbol;
}

/** return the total number of shares owned
* @return the int of total shares owned
*/
int Stock::GetShares() const{
    return shares;
}

/** return the current share price
* @return double of current share price 
*/
double Stock::GetSharePrice() const{
    return sharePrice;
}

/** updates the current share price to the formal parameter value
* @param sharePrice is the new share price
*/
void Stock::SetSharePrice(double sharePrice){
    this->sharePrice = sharePrice;
}

/** return the total cost paid for all shares
* @return the cost of all shares 
*/
double Stock::GetCost() const{
    return cost;
}

/** calculates the current market value through (share * sharePrice)
* @return the calculated market value;
*/
double Stock::GetMarketValue() const{
    return (shares * sharePrice);
}

/** computes the profit by subtracting market value from current cost
*@return the current profit 
*/
double Stock::GetProfit() const{
    return (GetMarketValue() - GetCost());
}

/** Prints the stock details including type, symbol, value, cost, and profit
 * With values set to 2 decimal places
*/
void Stock::Print() const{
    
    std::cout << "Stock (" << GetSymbol() << "):" << std::endl;
    std::cout << " value: $ " << std::fixed << std::setprecision(2) << GetMarketValue() << std::endl;
    std::cout << "  cost: $ " << std::fixed << std::setprecision(2) << GetCost() << std::endl;
    std::cout << "profit: $ " << std::fixed << std::setprecision(2) << GetProfit() << std::endl;
}

int main(){
    Stock testingAStock("AAA", 0.5);
    //std::cout << testingAStock.GetSharePrice() << std::endl;
    testingAStock.Print();
}








