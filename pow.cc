class Solution {
public:
    double pow(double x, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int pow = n;

        if (pow < 0)
            pow = -1 * pow;
            
        double ret = 1.0;
        double now = x;

        while (pow)
        {
            if (pow%2)
            {
                ret *= now;
            }
            now = now*now;
            pow /= 2;
        }
        
        if (n >= 0)
            return ret;
        else
            return 1.0/ret;
    }
};
