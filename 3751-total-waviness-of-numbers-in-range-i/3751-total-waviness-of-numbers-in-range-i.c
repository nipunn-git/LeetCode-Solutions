int waviness(int n) {
    int prev2 = -1, prev1 = -1; // last two digits
    int count = 0;

    while (n > 0) {
        int d = n % 10;  // current digit
        n /= 10;

        if (prev2 != -1 && prev1 != -1) {
            // check middle digit (prev1) with neighbors
            if (prev1 > prev2 && prev1 > d) count++;
            else if (prev1 < prev2 && prev1 < d) count++;
        }

        prev2 = prev1;
        prev1 = d;
    }
    return count;
}

int totalWaviness(int num1, int num2) {
    int total = 0;
    for (int i = num1; i <= num2; i++) {
        total += waviness(i);
    }
    return total;
}
