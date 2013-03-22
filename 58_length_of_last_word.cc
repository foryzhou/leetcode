class Solution {
public:
    int lengthOfLastWord(const char *s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int prev_len = 0;
        int len = 0;
        while (*s)
        {
            if (*s != ' ')
            {
                len++;
            }
            else
            {
                if (len != 0)
                    prev_len = len;
                len = 0;
            }
            s++;
        }
        if (len != 0)
            return len;
        else
            return prev_len;
    }
};
