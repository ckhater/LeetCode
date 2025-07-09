class Solution {
public:
    int mySqrt(int x) {
        int left = 1;

        if(x <= 0)
            return 0;
        if(x < 2)
            return x;
        int right = x / 2;
        int mid ;
        while(left <= right){
            mid = (left + right) / 2;
            if (mid == x / mid)
                return mid;
            else if (mid < x / mid)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
        
    }
};