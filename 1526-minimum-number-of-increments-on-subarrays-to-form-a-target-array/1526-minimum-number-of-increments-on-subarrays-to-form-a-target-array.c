int minNumberOperations(int* target, int targetSize) {
    int op=target[0];
    for(int i=1; i<targetSize; i++)
    {
        if(target[i] > target[i-1]) op += target[i]-target[i-1];
    }
    return op;
}