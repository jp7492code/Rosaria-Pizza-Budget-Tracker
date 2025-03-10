
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    Transaction(int id, const std::string& category, double amount, const std::string& date);
    void display() const;
    int getId() const;
    std::string getCategory() const;
    double getAmount() const;
    std::string getDate() const;

private:
    int id;
    std::string category;
    double amount;
    std::string date;
};

#endif
