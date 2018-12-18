class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> vRet;
        if(k == 0 || input.size() == 0 || k > input.size())return vRet;
        for(int i = 0; i < k; ++i)
            vRet.push_back(input[i]);
        priority_queue<int> q;
        for(auto& e : vRet)
            q.push(e);
        for(int i = k; i < input.size(); ++i)
        {
            if(q.top() < input[i])
                continue;
            else
            {
                q.pop();
                q.push(input[i]);

            }

        }
        for(int i = 0;i < k; ++i)
        {
            vRet[i] = q.top();
            q.pop();

        }
        return vRet;

    }

};
