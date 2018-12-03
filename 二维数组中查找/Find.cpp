#include <iostream>
using namespace std;
#include<vector>

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        size_t i = 0;
        size_t j = array[0].size()-1;
        while(i>=0&&i<array.size()&&j>=0&&j<array[0].size())
        {
            if(target  > array[i][j])
                i++;
            else if(target < array[i][j])
                j--;
            else return true;

        }
        return false;

    }

};
