class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        while ((mask & num) != num)
            mask = (mask << 1) | 1;
        return ~num & mask;
    }
};