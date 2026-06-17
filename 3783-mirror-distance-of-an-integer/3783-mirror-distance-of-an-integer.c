#include <stdlib.h>

int mirrorDistance(int n) {
    int rev=0;
    int original=n;
    while(n>0)
    {
        int temp=n%10;
        rev=temp+(rev*10);
        n=n/10;
    }
    int mirror= abs(original-rev);
    return mirror;
}