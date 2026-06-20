#include <string.h>

char* intToRoman(int num) {
    int integer[]= {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};  // 13 elements
    char* roman[]= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V","IV","I"};

    static char ans[20];    //since num<=3999 (given) hence we allocated enough space in ans to store it
                            // 3999 => MMMCMXCIX
    ans[0]='\0';            //initialize empty string

    for(int i=0; i<13 && num>0; i++)
    {
        while(num >= integer[i])
        {
            strcat(ans, roman[i]);
            num = num - integer[i];
        }
    }
    return ans;
}