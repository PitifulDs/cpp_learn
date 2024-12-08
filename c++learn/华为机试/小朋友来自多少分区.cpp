#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>	

using namespace std;

/* 求至少有多少个小朋友 */
int theCommunities(vector<int>& gardens)
{
	int totalKids = 0;
	unordered_map<int, int> kidsMap;// 记录每种反馈出现的次数
	for (auto& garden : gardens)
	{
		kidsMap[garden]++;
	}

	// 计算最少小区数量
	for (auto& kids : kidsMap)
	{
		int key = kids.first;
		int value = kids.second;
		int groupSize = key + 1;// 小区实际人数
		int groupNum = ceil(static_cast<double>(value)/groupSize);// 小区数量,向上取整
		totalKids += groupNum * groupSize; // 累加这些小区中的小朋友总数

	}
	return totalKids;

}

//int main()
//{
//	int n;
//	vector<int> gardens;
//	while (cin >> n)
//	{
//		gardens.push_back(n);
//	}
//
//
//	int result = theCommunities(gardens);
//	cout << result << endl;
//
//}
