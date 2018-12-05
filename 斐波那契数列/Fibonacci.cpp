class Solution {
public:
    int Fibonacci(int n) {
        if(n == 0)
            return 0;
        if(n < 2)
            return 1;
        size_t n1 = 0;
        size_t n2 = 1;
        size_t ret ;
        for(size_t i = 2; i <= n; ++i)
        {
            ret = n1 + n2;
            n1 = n2;
            n2 = ret;

        }
        return ret;

    }

};
