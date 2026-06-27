int maxDistinct(char* s) {
    int seen[26] = {0};
    int count =0;

    for(int i=0; s[i] !='\0';i++)
    {
        int idx = s[i] - 'a';
        if(!seen[idx])
        {
            seen[idx] = 1;
            count++;
        }
    }
    return count;
}