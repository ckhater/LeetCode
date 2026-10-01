class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        stack<char> p;

        for (int i = 0; i < l; i++){
            if(s[i] == '('){
                p.push(s[i]);
            }else if (s[i] == ')'){
                if(p.size() == 0 || p.top() != '(')
                    return false;
                p.pop();
            }else if (s[i] == '['){
                p.push(s[i]);
            }else if (s[i] == ']'){
                if(p.size() == 0 || p.top() != '[')
                    return false;
                p.pop();
            }else if (s[i] == '{'){
                p.push(s[i]);
            }else if (s[i] == '}'){
                if(p.size() == 0 || p.top() != '{')
                    return false;
                p.pop();
            }else {
                return false;
            }
        }
            if(p.size() != 0 )
                return false;
            return true;
    }
};