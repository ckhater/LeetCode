#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x) {
    int l;

    if(x >= 0 && x < 10)
    {
        return true;
    }
    l = (int)log10(fabs(x)) + 1;
    if(x < 0)
        l++;
    char s[l + 1];
    sprintf(s, "%d", x);
     int i = 0;
     int j = l;

     while(i < l/2)
     {
        if(s[i] != s[j - 1])
        {
            return(false);
        }
        i++;
        j--;
     }
     return(true);
}

// int main()
// {
//     int x = 121;
//     printf("%d", isPalindrome(x));
//     return 0;
// }