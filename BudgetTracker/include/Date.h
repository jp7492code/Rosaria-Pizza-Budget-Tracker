
#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
public:
    Date(const std::string& dateStr);
    std::string getFormattedDate() const;

private:
    std::string date;
};

#endif
