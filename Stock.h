#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

class Stock{
    private:
        std::string symbol;
        int shares;
        double cost;
        double sharePrice;

    public:
        Stock(std::string symbol, double sharePrice = 0.0);
        void Purchase(int shares, double sharePrice);
        std::string GetSymbol() const;
        int GetShares() const;
        double GetSharePrice() const;
        void SetSharePrice(double sharePrice);
        double GetCost() const;
        double GetMarketValue() const;
        double GetProfit() const;
        void Print() const;
};