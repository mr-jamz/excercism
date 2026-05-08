#include "raindrops.h"

namespace raindrops {
    // conversion method
    std::string convert(int a){
        // define output string
        std::string b;
        // condition 1 - Pling
        if(a % 3 == 0){
            b += "Pling";
        }
        // condition 2 - Plang
        if(a % 5 == 0){
            b += "Plang";
        }
        // condition 3 - Plong
        if(a % 7 == 0){
            b += "Plong";
        }
        // condition 4 - None
        // If string contents are not added from step 1-3, return the number in the string
        if(b.empty()){
            b = std::to_string(a);
        }
        return b;
    }
    
}  // namespace raindrops
