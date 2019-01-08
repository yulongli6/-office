#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
	string ReverseSentence(string str) {
		std::reverse(str.begin(), str.end());
		int left = 0;
		int right = 0;
		int size = str.size();
		while (right < size)
		{
			while (left < size && str[left] == ' ')
				left++;
			right = left;
			while (right < size && str[right] != ' ')
				right++;
			std::reverse(str.begin() + left, str.begin() + right);
			left = right;
		}
		return str;
	}
};