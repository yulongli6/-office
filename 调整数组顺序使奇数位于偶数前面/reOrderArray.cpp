#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    void reOrderArray(vector<int>& array) {
        int size = (int)array.size();
        vector<int> v(size);
        int j = 0;
        for(int i = 0; i < size; ++i)
        {
            if(array[i] % 2 == 1)
                v[j++] = array[i];

        }
        j = size -1;
        for(int i = j;i >= 0; --i)
        {
            if(array[i] % 2 == 0)
                v[j--] = array[i];

        }
        array = v;

    }

};
int main()
{
    vector<int> v{2,1,4,5,9};
    Solution s;
    s.reOrderArray(v);
    for(auto e : v)
        cout << e << " ";
    cout << endl;
    return 0;
}
