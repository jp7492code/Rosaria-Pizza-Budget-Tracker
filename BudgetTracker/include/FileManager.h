
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "BudgetManager.h"
#include <string>

class FileManager {
public:
    void saveTransactions(const std::string& filename, const BudgetManager& budgetManager);
    void loadTransactions(const std::string& filename, BudgetManager& budgetManager);
};

#endif
