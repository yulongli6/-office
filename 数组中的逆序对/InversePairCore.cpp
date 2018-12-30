class Solution {
public:
	int InversePairs(vector<int> data) {
		if (data.size() <= 1) return 0;//������ڵ���1��Ԫ�أ�ֱ�ӷ���0
		int* copy = new int[data.size()];
		//��ʼ�������飬��������Ϊ�����ʱ����Ľ�������Ҫ������Ľ�����Ƶ�ԭ������
		for (unsigned int i = 0; i < data.size(); i++)
			copy[i] = 0;
		//���õݹ麯�������
		int count = InversePairCore(data, copy, 0, data.size() - 1);
		delete[] copy;//ɾ����ʱ����
		return count;
	}
	//��������庯��
	int InversePairCore(vector<int>& data, int*& copy, int start, int end)
	{
		if (start == end)
		{
			copy[start] = data[start];
			return 0;
		}
		//�������ֳ�������
		int length = (end - start) / 2;//����ʹ�õ��±귨������Ҫ�����������������Ҳ����ֱ��ʹ��mid=��start+end��/2
		//�ֱ������߲��ֺ��ұ߲���
		int left = InversePairCore(data, copy, start, start + length) % 1000000007;
		int right = InversePairCore(data, copy, start + length + 1, end) % 1000000007;
		//�����������
		int i = start + length;//ǰһ����������һ���±�
		int j = end;//��һ��������±�
		int index = end;//���������±꣬�����һ������
		int count = 0;
		while (i >= start && j >= start + length + 1)
		{
			if (data[i] > data[j])
			{
				copy[index--] = data[i--];
				//ͳ�Ƴ���
				count += j - start - length;
				if (count >= 1000000007)//��ֵ��������
					count %= 1000000007;
			}
			else
			{
				copy[index--] = data[j--];
			}
		}
		for (; i >= start; --i)
		{
			copy[index--] = data[i];
		}
		for (; j >= start + length + 1; --j)
		{
			copy[index--] = data[j];
		}
		//����
		for (int i = start; i <= end; i++) {
			data[i] = copy[i];
		}
		//�������յĽ��
		return (count + left + right) % 1000000007;
	}
};