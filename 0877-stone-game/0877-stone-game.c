bool stoneGame(int* piles, int pilesSize) {
    for(int i=0; i<pilesSize; i++)
    {
        if(piles[0]==piles[pilesSize-1]) break;
    }
    return true;
}