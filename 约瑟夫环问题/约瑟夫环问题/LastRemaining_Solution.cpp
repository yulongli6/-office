class Solution {
public:
	int LastRemaining_Solution(unsigned int n, unsigned int m)
	{
		if (n == 0)
			return -1;
		if (n == 1)
			return 0;
		else
			return (LastRemaining_Solution(n - 1, m) + m) % n;
	}
};


class Solution {
public:
	int LastRemaining_Solution(int n, int m)
	{
		if (n == 0 || m == 0)return -1;
		list<int> l;
		for (int i = 0; i < n; ++i)
			l.push_back(i);
		list<int>::iterator it = l.begin();
		while (l.size() > 1)
		{
			for (int i = 0; i < m - 1; ++i){
				it++;
				if (it == l.end())
					it = l.begin();
			}
			list<int>::iterator next = ++it;
			if (next == l.end())
				next = l.begin();
			it--;
			l.erase(it);
			it = next;
		}
		return l.front();
	}
};
