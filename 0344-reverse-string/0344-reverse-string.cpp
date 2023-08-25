class Solution {
public:
    
    void reverseString(vector<char>& s) {
        int start=0;
        int len=s.size();
        int end=len-1;
        while(start<=end){
            swap(s[start++],s[end--]);
        } 
    }
};