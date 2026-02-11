#ifndef DIVIDENDSTOCK_H
#define DIVIDENDSTOCK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Stock.h"

class DividendStock:public Stock{
    private:
        double dividends;
    public:
        DividendStock(std::string symbol, double sharePrice = 0.0);
        void PayDividend(double amountPerShare);
        double GetMarketValue() const;
        double GetDividends() const;
        void Print() const;
};



#endif
