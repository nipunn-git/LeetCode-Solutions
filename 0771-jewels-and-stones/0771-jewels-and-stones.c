int numJewelsInStones(char* jewels, char* stones) {
    bool is_jewel[256] = {false};
    
    for (int i = 0; jewels[i] != '\0'; i++) 
    {
        is_jewel[(unsigned char)jewels[i]] = true;
    }
    
    int count = 0;
    
    for (int i = 0; stones[i] != '\0'; i++) 
    {
        if (is_jewel[(unsigned char)stones[i]]) 
        {
            count++;
        }
    }
    
    return count;
}