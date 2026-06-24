int lengthOfLongestSubstring(char* s) {
   int lastIndex[256]; // store last index of characters
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0;
    int left = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        if (lastIndex[(unsigned char)s[right]] >= left) {
            left = lastIndex[(unsigned char)s[right]] + 1;
        }

        // update last seen index
        lastIndex[(unsigned char)s[right]] = right;

        int currLen = right - left + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    return maxLen;
}