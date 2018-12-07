class Solution {
public:
    int rectCover(int number) {
        if(number < 3)
            return number;
        int a = 1;
        int b = 2;
        int c ;
        for(size_t i = 3; i <= number; ++i)
        {
            c = a + b;
            a = b;
            b = c;

        }
        return c;

    }

}; 
