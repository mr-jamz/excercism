#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind) {
        // TODO: Return true if you need a license for that kind of vehicle.
        // conditional checks if vehicle is a car OR truck, if true then outputs true for needs license
        if ((kind == "car") | (kind == "truck")) {
            return true;
        }
        else {
            return false;
        }
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // TODO: Return the final decision in a sentence.
        // check lexicographical order with comparison operator. Output based on which option comes first
        if (option1 < option2) {
            return option1 + " is clearly the better choice.";
        }
        else {
            return option2 + " is clearly the better choice.";
        }
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // TODO: Return the age-corrected resell price.
            // age less than 3, 80% of og price
        if (age < 3) {
            return original_price * .8;
            // age greater than or equal to 3, less than 10, 70% of og price
        }
        else if (age >= 3 && age < 10) {
            return original_price * .7;
            // age greater than or equal to 10, 50% of og price
        }
        else {
            return original_price * .5;
        }
    }
}  // namespace vehicle_purchase