class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (n <= 1)
            return n;
        
        int prev_value = A[0];
        int len = 1;
        for (int i=1; i< n; ++i)
        {
            if (A[i] != prev_value)
            {
                A[len++] = A[i];
                prev_value = A[i];
            }
        }
        return len;
    }
};
