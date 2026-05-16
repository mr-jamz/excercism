#include "difference_of_squares.h"

namespace difference_of_squares {
    // Square of sums formula: (1 + 2 + ⋯ + 10)^2 = 55^2 = 3025
    int square_of_sum(int n){
        int sum = (n * (n + 1)) / 2;
        // Square the result
        return sum * sum;
    }
    // Sum of squares formula: 1^2 + 2^2 + ⋯ + 10^2 = 385
    int sum_of_squares(int n){
        return (n * (n + 1) * (2 * n + 1)) / 6;
    }
    // Combines the 2 prior formulas to find the difference: (square of the sum) − (sum of the squares)
    int difference(int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
