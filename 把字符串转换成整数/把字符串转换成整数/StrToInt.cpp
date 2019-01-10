class Solution {
public:
	int StrToInt(string str) {
		int size = str.size();
		int symbol = 1;
		if (!size)return 0;
		long long ret = 0;
		if (str[0] == '-')symbol = -1;
		for (int i = (str[0] == '-' || str[0] == '+') ? 1 : 0; i < size; ++i)
		{
			if (str[i] < '0' || str[i] > '9')return 0;
			ret = ret * 10 + (str[i] - '0');
		}
		return ret*symbol;
	}
};