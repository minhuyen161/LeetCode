class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n){
            if((n&1)==1){
                sum++;
            }
            n = n>>1;
        }
        return sum;
    }
};