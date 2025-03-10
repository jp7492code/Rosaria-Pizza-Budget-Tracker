
#include "BudgetManager.h"
#include <iostream>
#include <algorithm>

void BudgetManager::addTransaction(const std::string& category, double amount, const std::string& date) {
    int newId = transactions.empty() ? 1 : transactions.back().getId() + 1;
    Transaction newTransaction(newId, category, amount, date);
    transactions.push_back(newTransaction);
}

void BudgetManager::removeTransaction(int id) {
    transactions.erase(std::remove_if(transactions.begin(), transactions.end(),
                    [id](const Transaction& t) { return t.getId() == id; }), transactions.end());
}

void BudgetManager::generateSummary() const {
    double total = 0;
    for (const auto& transaction : transactions) {
        total += transaction.getAmount();
    }
    std::cout << "Total Expenses: " << total << std::endl;
}
