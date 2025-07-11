#ifndef CASHREGISTER_H
#define CASHREGISTER_H

#include <vector>

class CashRegister {
public:
    void clear();
    void add_item(double price);
    double get_total() const;
    int get_count() const;
    void display_all() const;
private:
   std::vector<double> prices;
};



#endif //CASHREGISTER_H
