int reverseDegree(char* s) {
    int n = strlen(s);
    int sum=0;

    for(int i=0; i<n; i++)
    {
        int posInRevAlpha= 26-(s[i]-'a');
        int posInString = i+1;
        sum += posInRevAlpha * posInString;
    }
    return sum;
}