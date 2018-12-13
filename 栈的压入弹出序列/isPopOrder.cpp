class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> s;
        int In_i = 0;
        int Out_i = 0;
        while(Out_i < popV.size())
        {
            while(s.empty() || s.top() != popV[Out_i])
            {
                if(In_i < popV.size())
                    s.push(pushV[In_i++]);
                else 
                    return false;

            }

            s.pop();
            Out_i++;

        }

        return true;

    }

};
