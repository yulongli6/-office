class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.size() == 1)return array[0];
        int maxSum = 0;
        int sum = 0;

        for(int i = 0; i < array.size(); ++i)
        {
            sum += array[i];
            if(maxSum < sum)
                maxSum = sum;
            //当数组前面的数字相加时为负数，那么就不计算在结果中
                if(sum < 0)
                    sum = 0;

        }

        //当全为负数或者只有负数和0的情况
            if(maxSum == 0)
            {
                maxSum = array[0];
                for(int i = 1; i < array.size();++i)
                {
                    if(maxSum < array[i])
                        maxSum = array[i];

                }

            }
        return maxSum;

    }

};
