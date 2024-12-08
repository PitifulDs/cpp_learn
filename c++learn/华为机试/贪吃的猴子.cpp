#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

/*
	���ݷ�
*/
//void backTrace(vector<int>& numbers, int n, int left, int right, int count, 
//	int currentSum, int& maxSum)
//{
//	if (count == n)
//	{
//		maxSum = max(maxSum, currentSum);
//		return;
//	}
//
//	// �����
//	if (left <= right)
//	{
//		backTrace(numbers, n, left+1, right, count + 1, currentSum + numbers[left], maxSum);
//	}
//
//	// ���Ҷ�
//	if (left <= right)
//	{
//		backTrace(numbers, n, left , right - 1, count + 1, currentSum + numbers[right], maxSum);
//	}
//}
//
//
//int maxBananasBackTrace(vector<int>& numbers, int n)
//{
//	int maxSum = 0;
//	backTrace(numbers, n, 0, numbers.size() - 1, 0, 0, maxSum);
//	
//	
//	return maxSum;
//}
/*
	�������� + ��̬�滮
*/
int maxBananas(vector<int>& numbers, int n)
{
	int len = numbers.size();

	// ǰ׺������
	vector<int> left_prefix(n + 1, 0);
	vector<int> right_prefix(n + 1, 0);

	// ��������ȡǰ׺��
	cout << "left_prefix: ";
	for (int i = 0; i < n; i++)
	{
		left_prefix[i + 1] = left_prefix[i] + numbers[i];
		cout << left_prefix[i+1] << ' ';
	}
	cout << endl;
	// ������Ҷ�ȡǰ׺��
	cout << "right_prefix: ";
	for (int i = 0; i < n; ++i) {
		right_prefix[i + 1] = right_prefix[i] + numbers[len - 1 - i];
		cout << right_prefix[i+1] << ' ';
	}
	cout << endl;
	int max_bananas = 0;
	for (int i = 0; i <= n; i++)
	{
		max_bananas = max(max_bananas, left_prefix[i] + right_prefix[n - i]);
	}
	return max_bananas;
}

//int main()
//{
//	int len;
//	cin >> len;
//	vector<int> numbers(len);
//	for (int i = 0; i < len; i++)
//	{
//		cin >> numbers[i];
//	}
//	int n; // ��ȡ����
//	cin >> n;
//	if (n > len)
//	{
//		return 0;
//	}
//
//	int result = maxBananas(numbers, n);
//
//	cout << result << endl;
//
//}