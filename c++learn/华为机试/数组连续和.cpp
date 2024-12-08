#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

/*��������*/
//long long getSum(vector<int> nums, int x)
//{
//	int n = nums.size();
//	long long count = 0;
//	long currentSum = 0;
//	int start = 0;
//
//	// �����������
//	if (x == 0) {
//		// �ܹ��� (n * (n + 1)) / 2 ���ǿ�������
//		return static_cast<long long>(n) * (n + 1) / 2;
//	}
//
//	// �������ڱ�������
//	for (int end = 0; end < n; end++)
//	{
//		currentSum += nums[end];
//		// �����ǰ���ںʹ��ڵ���x������С����
//		while (currentSum >= x)
//		{
//			count += (n - end); // �Ե�ǰrightΪ��β�����з�������������
//			currentSum -= nums[start];
//			start++;
//		}
//
//
//	}
//
//	return count;
//}




/////*ǰ׺�ͣ� �������׳�ʱ*/
//long long getSum(vector<int> nums, int x)
//{
//	// ����ǰ׺������
//	int n = nums.size();
//	vector<int> prefix(n + 1, 0);
//	long long count = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		prefix[i] = prefix[i - 1] + nums[i - 1];
//	}
//
//	// ����������㣬������������������������
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (prefix[j] - prefix[i - 1] >= x)
//			{
//				count += (n - j + 1);// �� j Ϊ�յ�����������鶼��������,һ���Խ����з�������������������ͳ�Ƶ� count ��
//				break;
//			}
//		}
//
//
//	}
//
//	return count;
//}


//int main()
//{
//	int n, x;
//	cin >> n >> x;
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//
//	long long res = getSum(nums, x);
//	cout << res << endl;
//}

