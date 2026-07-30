int minimumPushes(char* word) {
    int n=strlen(word);
    int total=0;

    for(int i=0; i<n; i++)
    {
        total += (i/8)+1;
    }
    return total;
}