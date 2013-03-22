class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int carry = 1;
        int len = digits.size();
        for (int i=len-1; i>=0; --i)
        {
            digits[i] += carry;
            
            if (digits[i] < 10)
            {
                return digits;
            }
            digits[i] %= 10;
            carry = 1;
        }
        if (carry > 0)
        {
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};
