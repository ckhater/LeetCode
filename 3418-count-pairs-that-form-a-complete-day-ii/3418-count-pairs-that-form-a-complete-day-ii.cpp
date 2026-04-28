class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long count = 0;
        unordered_map<size_t, size_t> hash;

        for (size_t i = 0; i < hours.size();i++){
            size_t rmd = hours[i] % 24;
            size_t check = (24 - rmd) %24;
            if (hash.find(check) != hash.end())
                count += hash[check];
            hash[rmd]++;
        }
        return count;
        
    }
};