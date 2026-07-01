/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 // function to check if the word has char 'x'
bool containsChar(char* word, char x)
{
    for(int i=0;i<word[i] != '\0';i++)
    {
        if(word[i] == x) return true;
    }
    return false;
}

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* result=(int*)malloc(wordsSize * sizeof(int));
    *returnSize=0;

    for(int i=0; i<wordsSize; i++)
    {
        if(containsChar(words[i] , x))
        {
            result[*returnSize]=i;
            (*returnSize)++;
        }
    }
    return result;
}