#include <limits.h>
#include <stdlib.h>  // for llabs

int divide(int dividend, int divisor) {
    // Handling overflow case
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Handling divide by zero
    if (divisor == 0) {
        return -1;
    }

    // sign of result
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    // positive values using long long to avoid overflow
    long long ldividend = llabs((long long)dividend);
    long long ldivisor = llabs((long long)divisor);

    long long result = 0;

    while (ldividend >= ldivisor) {
        long long temp = ldivisor, multiple = 1;
        while (ldividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        ldividend -= temp;
        result += multiple;
    }

    result = sign * result;

    // Clamping result to int range
    if (result > INT_MAX) return INT_MAX;
    if (result < INT_MIN) return INT_MIN;

    return (int)result;
}
