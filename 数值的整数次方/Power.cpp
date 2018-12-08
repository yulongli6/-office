#include <iostream>

class Solution {
public:
    double Power(double base, int exponent) {
        double mul = 1.0;
        if (base == 0)
            return 0;
        if (exponent == 0)
            return 1;
        if (exponent < 0)
            base = 1.0 / base;
        while (exponent){
            mul *= base;
            exponent = (exponent>0) ? (--exponent) : (++exponent);

        }
        return mul;

    }

};
