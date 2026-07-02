bool isUgly(int n) {
    if (n <= 0) return false;   // ugly numbers must be positive
    
    // Keep dividing by 2, 3, and 5 while possible
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    // If after removing all 2s, 3s, and 5s we get 1 → it's ugly
    return n == 1;
}