class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        int number = digits[n]+1;
        vector<int>temp;
        if(digits[n]<9){
            digits[n] = number;
        }
        else {
            digits[n] = 0;
            int carry = 1;
            for (int i = n - 1; i >= 0; i--) {
                if (digits[i] + carry > 9) {
                    digits[i] = 0;
                    carry = 1;
                }
                else {
                    digits[i] = digits[i] + carry;
                    carry = 0;
                }
            }
            if (carry == 1) {
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
        }
        
};