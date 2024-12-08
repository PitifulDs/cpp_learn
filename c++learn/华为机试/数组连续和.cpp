#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

/*滑动窗口*/
//long long getSum(vector<int> nums, int x)
//{
//	int n = nums.size();
//	long long count = 0;
//	long currentSum = 0;
//	int start = 0;
//
//	// 特殊情况处理
//	if (x == 0) {
//		// 总共有 (n * (n + 1)) / 2 个非空子数组
//		return static_cast<long long>(n) * (n + 1) / 2;
//	}
//
//	// 滑动窗口遍历数组
//	for (int end = 0; end < n; end++)
//	{
//		currentSum += nums[end];
//		// 如果当前窗口和大于等于x，则缩小窗口
//		while (currentSum >= x)
//		{
//			count += (n - end); // 以当前right为结尾的所有符合条件的区间
//			currentSum -= nums[start];
//			start++;
//		}
//
//
//	}
//
//	return count;
//}




/////*前缀和， 但是容易超时*/
//long long getSum(vector<int> nums, int x)
//{
//	// 计算前缀和数组
//	int n = nums.size();
//	vector<int> prefix(n + 1, 0);
//	long long count = 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		prefix[i] = prefix[i - 1] + nums[i - 1];
//	}
//
//	// 遍历所有起点，查找满足条件的子数组数量
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (prefix[j] - prefix[i - 1] >= x)
//			{
//				count += (n - j + 1);// 以 j 为终点的所有子数组都符合条件,一次性将所有符合条件的子数组数量统计到 count 中
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

