
#include "ReportGenerator.h"
#include <iostream>

void ReportGenerator::generateReport(const BudgetManager& budgetManager) {
    std::cout << "
Expense Report:
";
    budgetManager.generateSummary();
}
