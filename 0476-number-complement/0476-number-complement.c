int findComplement(int num) {
    unsigned int n=1;

    while(n<num){
        n= (n << 1) | 1;
    }
    return num ^ n;
}