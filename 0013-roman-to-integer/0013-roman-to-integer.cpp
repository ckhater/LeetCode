class Solution {
public:
    int theint(char c){
        if(c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        return 1000;
}
    int romanToInt(string s) {
        int r = 0;
        for(int i = 0; s[i];i++){
            if(s[i+1] && theint(s[i]) < theint(s[i + 1])){
                r = r + (theint(s[i+1]) - theint(s[i]));
                i ++;
            }
            else
                r += theint(s[i]);  
        }
    return r;
    }
};