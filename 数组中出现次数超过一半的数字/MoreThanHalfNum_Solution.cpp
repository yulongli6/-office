class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        vector<int> v(10,0);
        for(int i = 0; i < numbers.size(); ++i)
        {
            v[numbers[i]]++;

        }

        for(int i = 0; i < v.size(); ++i)
        {
            if(v[i] > numbers.size()/2)
                return i;

        }

        return 0;

    }

};
