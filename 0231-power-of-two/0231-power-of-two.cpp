class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++)
        {
            int sq=pow(2,i);
            if(sq==n){
                return true;
                break;
            }
        }
        return false;
    }
};