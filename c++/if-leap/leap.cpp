#include "leap.h"

namespace leap {
    // TODO: determine if a given year is a leap year
    bool is_leap_year(int year) {
        // if conditions stacked to determine leap year status
        // a condition
        if (year % 4 == 0) {
            // b condition
            if (year % 100 == 0) {
                // c condition
                if (year % 400 == 0) {
                    //c condition
                    return true;
                }
                // b condition
                return false;
            }
            // a condition
            return true;
        }
        // d - all else
        return false;
    }
}  // namespace leap
