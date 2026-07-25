char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    static char result[101];
    int pos=0;

    for(int i=0; i<wordsSize; i++)
    {
        int sum=0;
        for(int j=0; j<strlen(words[i]); j++)
        {
            char c=words[i][j];
            sum +=weights[c-'a'];
        }
        int mod=sum%26;
        char mapped = 'z'-mod;
        result[pos++]=mapped;
    }
    result[pos] = '\0';
    return result;
}