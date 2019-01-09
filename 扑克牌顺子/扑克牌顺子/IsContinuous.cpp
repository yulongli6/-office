class Solution {
public:
	bool IsContinuous(vector<int> numbers) {
		if (numbers.size() != 5) return false;
		sort(numbers.begin(), numbers.end());
		int i = 0;
		while (numbers[i] == 0) i++;
		if (numbers[4] - numbers[i] > 4) return false;
		for (int j = i; j < 4; j++){
			if (numbers[j] == numbers[j + 1]) return false;
		}
		return true;
	}
};