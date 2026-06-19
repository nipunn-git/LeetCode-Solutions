#include<string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0) return "";

    static char prefix[1000];
    strcpy(prefix, strs[0]);

    for(int i=0;i<strsSize;i++)
    {
        while(strncmp(prefix, strs[i], strlen(prefix)) != 0)
        {
            prefix[strlen(prefix)-1] = '\0';
            if(strlen(prefix)==0) return "";
        }
    }
    return prefix;
}