class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c1=0;
        while(n!=0){
            if(n&1){
              c1++;  
            }
            n=n>>1;
        }
        return c1;
    }
};