class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > allRet;
        if(sum < 2)return allRet;
        int n = (int)sqrt(sum * 2);
        for(int i = n; i >= 2; i--)
        {
            if(((i & 1) && !(sum % i)) || ((sum % i)*2 == i))
            {
                vector<int> temp;
                for(int j = 0, k = (sum / i) - (i -1)/2; j < i; j++,k++)
                {
                    temp.push_back(k);

                }
                allRet.push_back(temp);

            }

        }
        return allRet;

    }

};




class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) 
    {
        vector<vector<int> > allRes;
        int phigh = 2,plow = 1;

        while(phigh > plow){
            int cur = (phigh + plow) * (phigh - plow + 1) / 2;//求和公式
                if( cur < sum )
                    phigh++;

            if( cur == sum ){
                vector<int> res;
                for(int i = plow; i<=phigh; i++)
                    res.push_back(i);
                allRes.push_back(res);
                plow++;

            }

            if(cur > sum)
                plow++;

        }

        return allRes;

    }

};
