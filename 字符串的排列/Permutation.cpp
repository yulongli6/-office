class Solution {
public:
    void _Permutation(string str, vector<string>& vRet,int index)
    {
        if(index == str.size()-1)
            vRet.push_back(str);
        for(int i = index; i < str.size();++i)
        {
            if(i != index && str[i] == str[index])
                continue;
            swap(str[i], str[index]);
            _Permutation(str, vRet, index+1);

        }

    }
    vector<string> Permutation(string str) {
        vector<string> vRet;
        if(str.empty()) return vRet;
        int index = 0;
        _Permutation(str,vRet,index);
        sort(str.begin(),str.end());
        return vRet;

    }

};
