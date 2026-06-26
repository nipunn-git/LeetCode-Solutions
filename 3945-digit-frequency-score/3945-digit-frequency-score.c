int digitFrequencyScore(int n) {
    int freq[10] = {0};  // frequency array for digits 0-9
    while (n > 0) 
    {
        int digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    int score = 0;
    for (int d = 0; d < 10; d++) 
    {
        score += d * freq[d];
    }
    return score;
}