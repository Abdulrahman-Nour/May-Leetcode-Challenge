// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        int l = 0, r = n;
        int mid;
        while (l < r){
            mid = l + (r-l)/2;
            if (isBadVersion(mid))
                r = mid;
            else 
                l = mid + 1;
        }
        return l;
    }
};