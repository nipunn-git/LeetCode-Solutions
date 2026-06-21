double myPow(double x, int n) {
    long long exp = n;   // long long to avoid overflow
    if (exp < 0) {
        x = 1.0 / x;
        exp = -exp;
    }

    double p = 1.0;
    while (exp > 0) {
        if (exp % 2 == 1) {   // if odd
            p *= x;
        }
        x *= x;               // square the base
        exp /= 2;             // half the exponent
    }
    return p;
}