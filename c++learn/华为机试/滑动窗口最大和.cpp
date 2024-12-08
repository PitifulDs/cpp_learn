#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int windowMax(vector<int>& nums, int m)
{
	int curSum = 0;
	int maxSum = 0;

	// 第一个窗口的值
	for (int i = 0; i < m; i++)
	{
		curSum += nums[i];
	}
	maxSum = curSum;

	for (int i = m; i < nums.size(); i++)
	{
		curSum += nums[i] - nums[i - m];
		maxSum = max(curSum, maxSum);
	}
	return maxSum;

}

//int main()
//{
//	int n;	// 整数个数
//	cin >> n;
//	vector<int> nums(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> nums[i];
//	}
//
//	int m;	// 窗口大小
//	cin >> m;
//
//	if (m > n) return 0;
//
//	int result = windowMax(nums, m);
//
//	cout << result << endl;
//
//}