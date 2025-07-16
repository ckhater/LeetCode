class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect(numRows);
        for(int i = 0; i < numRows; i++){
            int k = 0;
            vect[i].resize(i + 1);
            vect[i][k] =  1;
            vect[i][i] = 1;
            k++;
            while(k < i){
                vect[i][k] = vect[i - 1][k - 1] + vect[i - 1][k];
                k++;
            }
        }
        return vect;
    }
};