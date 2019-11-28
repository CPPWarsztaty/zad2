#ifndef ZAD2_STATISTICS_H
#define ZAD2_STATISTICS_H

#include "Operation.h"
#include <ostream>

class Statistics {
public:
    void add(const Operation& operation);

    Operation::TimeUnit median();
    Operation::TimeUnit mode();
    Operation::TimeUnit average();

    Operation::TimeUnit median(const std::string& type);
    Operation::TimeUnit mode(const std::string& type);
    Operation::TimeUnit average(const std::string& type);

    friend std::ostream& operator << (std::ostream& stream, const Statistics& statistics);
};


#endif //ZAD2_STATISTICS_H
