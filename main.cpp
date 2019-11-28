#include "Statistics.h"

int main() {
    Statistics stats;

    stats.add({"Open file", Operation::TimeUnit(100)});
    stats.add({"Read line", Operation::TimeUnit(100)});
    stats.add({"Read line", Operation::TimeUnit(100)});

    stats.add({"Connect to DB", Operation::TimeUnit(500000)});
    stats.add({"Execute select query", Operation::TimeUnit(1000000)});
    stats.add({"Execute insert query", Operation::TimeUnit(100000)});
    stats.add({"Close connection", Operation::TimeUnit(100000)});

    return 0;
}