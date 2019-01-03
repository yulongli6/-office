class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size() < 2)
            return;
        int temp = data[0];
        for(int i = 1; i < data.size(); ++i)
            temp ^= data[i];
        if(temp == 0)
            return;
        int index = 0;
        if((temp & 1) == 0)
        {
            temp = temp >> 1;
            index++;

        }

        *num1 = *num2 = 0;
        for(int i = 0; i < data.size(); ++i)
        {
            if(isBit(data[i], index))
                *num1 ^= data[i];
            else
                *num2 ^= data[i];

        }

    }
private:
    bool isBit(int data, int index)
    {
        data = data >> index;
        return (data&1);

    }

};
