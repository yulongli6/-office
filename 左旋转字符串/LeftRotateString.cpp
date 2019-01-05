class Solution {
public:
    string LeftRotateString(string str, int n) {
        int size = str.size();
        if(size == 0)return str;
        n = n % size;
        reverse(str.begin(), str.begin() + n);
        reverse(str.begin() + n, str.end());
        reverse(str.begin(), str.end());
        return str;

    }

};




class Solution {
public:
    string LeftRotateString(string str, int n) {
        int size = str.size();
        if(size == 0)return str;
        n = n % size;
        str += str;
        string ret = str.substr(n, size);
        return ret;

    }

};
