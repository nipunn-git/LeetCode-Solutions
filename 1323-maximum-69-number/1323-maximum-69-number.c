int maximum69Number (int num) {
    int place = 1000; // since num <= 10^4, max 4 digits
    int temp = num;

    while (place > 0) {
        int digit = temp / place;
        if (digit == 6) {
            // change the first 6 we encounter to 9
            return num + 3 * place;
        }
        temp %= place;
        place /= 10;
    }
    return num; // if no 6 found, return original
}