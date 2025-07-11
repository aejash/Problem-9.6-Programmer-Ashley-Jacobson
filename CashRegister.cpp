#include "CashRegister.h"

#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;


CashRegister::CashRegister()
{

}

void CashRegister::clear()
{
    for(int i = 0; i < prices.size(); i++)
    {
        prices.erase(prices.begin() + i);
    }
}

void CashRegister::add_item(double price)
{
    prices.push_back(price);
}

double CashRegister::get_total() const
{
    double sum = 0;
    for(int i = 0; i < prices.size(); i++)
    {
        sum += prices.at(i);
    }
    return sum;
}

int CashRegister::get_count() const
{
    int count = prices.size();
    return count;
}

void CashRegister::display_all() const
{
    for(int i = 0; i < prices.size(); i++)
    {
        cout << "Item " << i+1 << ": $"
           << fixed << setprecision(2) << prices.at(i) << endl;
    }
}