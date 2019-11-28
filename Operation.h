#ifndef ZAD2_OPERATION_H
#define ZAD2_OPERATION_H


#include <string>
#include <chrono>

struct Operation {
    using TimeUnit = std::chrono::microseconds;
    std::string type;
    TimeUnit duration;
};


#endif //ZAD2_OPERATION_H
