bool detectCapitalUse(char* word) {
    int uppercase=0;
    int len = strlen(word);

    for(int i=0;i<len;i++)
    {
        if(isupper(word[i]))
        {
            uppercase++;
        }
    }
    if(uppercase == len) return true;
    if(uppercase == 0) return true;
    if(uppercase == 1 && isupper(word[0])) return true;

    return false;
}