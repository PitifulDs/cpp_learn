#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxGems(vector<int> gemsPrices, int money)
{
	if (gemsPrices.size() == 0) return 0;

	int count = 0; // 宝石数量
	int left = 0 , right = 0; // 左右指针
	int curSum = 0; // 当前窗口内的宝石价格总和
	while (right < gemsPrices.size())
	{
		// 增加右边界，尝试扩大窗口
		if (curSum + gemsPrices[right] <= money)
		{
         	curSum += gemsPrices[right];
			right++;
		}
		else {
			// 更新最大值，并且收缩左边界
			count = max(count, right - left);
			curSum -= gemsPrices[left];
			left++;
		}

	}

	// 最后再更新一次最大值
	count = max(count, right - left);


	return count;
}

//int main()
//{
//	int n; // 宝石数量
//	cin >> n;
//
//	vector<int> gemsPrices(n); // 宝石价格
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> gemsPrices[i];
//	}
//		
//	int money; // 顾客钱包
//	cin >> money;
//
//	int result = maxGems(gemsPrices, money);
//	cout << result << endl;
//
//}


//int maxGems(vector<int> gemsPrices, int money)
//{
//	vector<int> dp(money + 1, 0); // dp[i]表示顾客钱包为i时最多能购买的宝石数量
//	for (int i = 0; i < gemsPrices.size(); i++)
//	{
//		for (int j = money; j >= gemsPrices[i]; j--)
//		{
//   			dp[j] = max(dp[j], dp[j - gemsPrices[i]] + 1);
//			
//		}
//	
//	}
//	return dp[money];
//}