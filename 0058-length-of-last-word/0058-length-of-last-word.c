int lengthOfLastWord(char* s) {
    char temp;
    int i = strlen(s) - 1;
    
    // Step 1: Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    // Step 2: Count characters until next space
    int count = 0;
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }
    
    return count;
}