
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Transaction.h"
#include "BudgetManager.h"
#include "FileManager.h"
#include "ReportGenerator.h"

using namespace std;

int main() {
    BudgetManager budgetManager;
    FileManager fileManager;
    ReportGenerator reportGenerator;

    fileManager.loadTransactions("data/transactions.txt", budgetManager);

    string command;
    cout << "Welcome to the Budget Tracker!" << endl;

    while (true) {
        cout << "
Enter command (add, remove, summary, report, exit): ";
        getline(cin, command);

        if (command == "add") {
            string category;
            double amount;
            string date;
            cout << "Enter category, amount, and date (YYYY-MM-DD): ";
            cin >> category >> amount >> date;
            budgetManager.addTransaction(category, amount, date);
            fileManager.saveTransactions("data/transactions.txt", budgetManager);
        } else if (command == "remove") {
            int id;
            cout << "Enter transaction ID to remove: ";
            cin >> id;
            budgetManager.removeTransaction(id);
            fileManager.saveTransactions("data/transactions.txt", budgetManager);
        } else if (command == "summary") {
            budgetManager.generateSummary();
        } else if (command == "report") {
            reportGenerator.generateReport(budgetManager);
        } else if (command == "exit") {
            break;
        } else {
            cout << "Invalid command!" << endl;
        }
    }

    return 0;
}
