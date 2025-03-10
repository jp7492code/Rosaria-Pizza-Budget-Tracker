
#include "FileManager.h"
#include <fstream>
#include <sstream>

void FileManager::saveTransactions(const std::string& filename, const BudgetManager& budgetManager) {
    std::ofstream file(filename);
    for (const auto& transaction : budgetManager.getTransactions()) {
        file << transaction.getId() << "," << transaction.getCategory() << ","
             << transaction.getAmount() << "," << transaction.getDate() << std::endl;
    }
}

void FileManager::loadTransactions(const std::string& filename, BudgetManager& budgetManager) {
    std::ifstream file(filename);
    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);
        int id;
        std::string category, date;
        double amount;
        char comma;

        ss >> id >> comma >> category >> comma >> amount >> comma >> date;
        budgetManager.addTransaction(category, amount, date);
    }
}
