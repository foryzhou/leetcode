class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (n <= 0)
            return 0;
        int len = 1;
        int count = 1;
        int prev_value = A[0];
        
        for (int i=1; i<n; ++i)
        {
            if (A[i]==prev_value)
            {
                count++;
            }
            else
            {
                count = 1;
                prev_value = A[i];
            }
            
            if (count <= 2)
            {
                A[len++]=prev_value;
            }
        }
        return len;
    }
};
