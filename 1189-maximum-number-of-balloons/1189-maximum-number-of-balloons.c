int maxNumberOfBalloons(char* text) {
    int freq[26] = {0};

    // Count frequency of each character
    for (int i = 0; text[i] != '\0'; i++) {
        freq[text[i] - 'a']++;
    }

    // Calculate minimum possible balloon
    int b = freq['b' - 'a'];
    int a = freq['a' - 'a'];
    int l = freq['l' - 'a'] / 2;
    int o = freq['o' - 'a'] / 2;
    int n = freq['n' - 'a'];

    int min = b;
    if (a < min) min = a;
    if (l < min) min = l;
    if (o < min) min = o;
    if (n < min) min = n;

    return min;
}