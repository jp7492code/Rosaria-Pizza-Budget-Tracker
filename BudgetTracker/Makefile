
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

SRC = src/BudgetTracker.cpp src/Transaction.cpp src/BudgetManager.cpp src/FileManager.cpp src/ReportGenerator.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = budgettracker

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
