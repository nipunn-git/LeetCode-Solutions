int numberOfSubstrings(char* s) {
    int n= strlen(s);
    int count[3] ={0};
    int left=0, res=0;

    for(int i=0;i<n;i++)
    {
        count[s[i]-'a']++;

        while (count[0]>0 && count[1]>0 && count[2]>0)
        {
            res +=(n-i);
            count[s[left]-'a']--;
            left++;
        }
    }
    return res;
}
