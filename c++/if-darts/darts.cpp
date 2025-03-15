#include "darts.h"
// TODO: determine points scored in a game of darts based on the cartesian coordinates of the darts thrown location
namespace darts {

    // function inputs grid coordinates and outputs related score
    int score(float x, float y) {
        // outer ring
        // 10 as sqrt 100 for distance from center
        if (x * x + y * y <= 100) {
            // middle ring
            // 5 as sqrt 25 for distance from center
            if (x * x + y * y <= 25) {
                // inner ring
                // 1 as sqrt 1 for distance from center
                if (x * x + y * y <= 1) {
                    // inner ring
                    return 10;
                }
                // middle ring
                return 5;
            }
            // outer ring
            return 1;
        }
        // out of bounds
        return 0;
    }

}  // namespace darts