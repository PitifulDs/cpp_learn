#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <unordered_set>
#include <numeric>
using namespace std;

pair<int, int> matchComPower(vector<int> computingPowerL1, vector<int> computingPowerL2, int targetDiff)
{
	// 使用unordered_set记录B组服务器中的算力
	unordered_set<int> setB(computingPowerL2.begin(), computingPowerL2.end());
	sort(computingPowerL1.begin(), computingPowerL1.end());
	for (int a : computingPowerL1)
	{
		// 计算需要从B组中找到的目标值
		int b = a - targetDiff;
		//  // 如果在B组中找到了该目标值，返回一对值
		if (setB.find(b) != setB.end())
		{
			return make_pair(a, b);
		}

	}
	
	return { -1, -1 }; // 理论上不会到这里，因为题目保证了答案存在

}

//int main()
//{
//	int l1, l2;
//	cin >> l1 >> l2;
//
//	vector<int> computingPowerL1(l1);
//	vector<int> computingPowerL2(l2);
//	for (int i = 0; i < l1; i++)
//	{
//		cin >> computingPowerL1[i];
//	}
//
//	for (int i = 0; i < l2; i++)
//	{
//		cin >> computingPowerL2[i];
//	}
//
//	int sumPowerL1 = accumulate(computingPowerL1.begin(), computingPowerL1.end(), 0);
//	int sumPowerL2 = accumulate(computingPowerL2.begin(), computingPowerL2.end(), 0);
//
//	// 计算总算力的差值,本体必然有解,一定能整除2
//	int diff = sumPowerL1 - sumPowerL2;
//
//	pair<int, int> result = matchComPower(computingPowerL1, computingPowerL2, diff/2);
//	cout << result.first << " " << result.second << endl;
//
//}