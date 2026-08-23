bool sumGame(char* num) {
    int n = strlen(num);
    double diff = 0.0;

    for (int i = 0; i < n / 2; ++i) {
        if (num[i] == '?') {
            diff += 4.5;
        } else {
            diff += num[i] - '0';
        }
    }

    for (int i = n / 2; i < n; ++i) {
        if (num[i] == '?') {
            diff -= 4.5;
        } else {
            diff -= num[i] - '0';
        }
    }

    return diff != 0.0;
}