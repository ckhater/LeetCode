#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x);
};

bool Solution::isPalindrome(int x) {
    if(x >= 0 && x < 10)
        return true;
    std::string str;
    str = std::to_string(x);
    std::string rev = str;
    std::reverse(rev.begin(),rev.end());
    if(str == rev)
        return true;
    return false;
}

// int main()
// {
//     Solution sol;
//     int x = -121;
//     printf("%d", sol.isPalindrome(x));
//     return 0;
// }