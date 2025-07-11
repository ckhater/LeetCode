class Solution {
public:
    void    first_checks(string first, string last, string &occu){
        int f = first.length();
        int l = last.length();
        int i = 0, j = 0;

        while(i < f && j < l && first[i] == last[j]){
            occu += first[i];
            i++;
            j++;
        }
    }
    void    checks(string first, string last, string &occu){
        int f = first.length();
        int l = last.length();
        int o = occu.length();
        int i = 0, j = 0, k = 0;
        int r;

        while(i < f && j < l && k < o && first[i] == last[j] && first[i] == occu[k])
        {
            i++;
            k++;
            j++;
        }
        if(k < o){
            r = o - k;
            while(r){
                occu.pop_back();
                r--;
            }
        }
    }
    string longestCommonPrefix(vector<string>& strs) {
        size_t l = strs.size();
        size_t m = l - 1;
        string result;
        size_t i = 1;
        first_checks(strs[0],strs[m],result);
        m--;
        while(i <= l/2 && m >= l/2 && !result.empty()){
            checks(strs[i],strs[m],result);
            m--;
            i++;
        }
        return result;
    }
};