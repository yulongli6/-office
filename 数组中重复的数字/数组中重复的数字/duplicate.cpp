class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		//vector<int> map;
		//map.resize(length, 0);
		int *map = new int[length]();
		for (int i = 0; i < length; ++i)
		{
			if (map[numbers[i]] < length)
				map[numbers[i]] = length;
			else
			{
				*duplication = numbers[i];
				delete[] map;
				return true;
			}
		}
		delete[] map;
		return false;
	}
};