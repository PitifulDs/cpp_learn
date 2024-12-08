#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// 判断是否能在 8 小时内搬完砖
bool canCompleteInTime(const vector<int>& bricks, int energyPerHour, int hours)
{
	int needHours = 0;
	for (int b : bricks)
	{
		needHours += ceil(static_cast<double>(b) / energyPerHour);
		if (needHours > hours)
		{
			return false;
		}
	}

	return true;
}

int minEnergy(vector<int>& bricks, int hours)
{
	int maxBrick = 0;
	for (auto& n : bricks)
	{
		maxBrick = max(maxBrick, n);
	}
	int res = -1; // 初始值表示不可能
	int low = 1;
	int high = maxBrick;

	while (low <= high)
	{
		int mid = low + (high - low) / 2; // 防止越界
		if (canCompleteInTime(bricks, mid, hours))
		{
			res = mid;
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}

	return res;
}

//
//int main()
//{
//	string line;
//	getline(cin, line); // 读取整行输入
//	stringstream ss(line);
//	int n;
//	vector<int> bricks;
//	while (ss >> n)
//	{
//		bricks.push_back(n);
//	}
//
//	int hours = 8;
//	
//	int result = minEnergy(bricks, hours);
//
//	cout << result << endl;
//	
//}