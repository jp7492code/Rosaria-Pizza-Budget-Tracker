
#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H

#include "Transaction.h"
#include <vector>

class BudgetManager {
public:
    void addTransaction(const std::string& category, double amount, const std::string& date);
    void removeTransaction(int id);
    void generateSummary() const;
    std::vector<Transaction>& getTransactions() { return transactions; }

private:
    std::vector<Transaction> transactions;
};

#endif
