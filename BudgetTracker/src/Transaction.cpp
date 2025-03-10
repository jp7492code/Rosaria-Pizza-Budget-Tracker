
#include "Transaction.h"
#include <iostream>

Transaction::Transaction(int id, const std::string& category, double amount, const std::string& date)
    : id(id), category(category), amount(amount), date(date) {}

void Transaction::display() const {
    std::cout << "ID: " << id << ", Category: " << category << ", Amount: " << amount << ", Date: " << date << std::endl;
}

int Transaction::getId() const {
    return id;
}

std::string Transaction::getCategory() const {
    return category;
}

double Transaction::getAmount() const {
    return amount;
}

std::string Transaction::getDate() const {
    return date;
}
