#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
using namespace std;

struct ElementInfo {
	int count;   // 出现次数
	int index;   // 第一次出现的位置

};

bool compare(pair<int, ElementInfo>& a, pair<int, ElementInfo>& b)
{
	if (a.second.count == b.second.count)
	{
		return a.second.index < b.second.index;
	}
	return a.second.count > b.second.count; // 按出现次数排序
}

//int main()
//{
//	string line;
//	getline(cin, line);
//	string temp;
//	stringstream ss(line);
//	vector<int> arr;
//	
//	while (getline(ss, temp, ','))
//	{
//		int n = stoi(temp);
//		arr.push_back(n);
//	}
//
//	unordered_map<int, ElementInfo> hashMap;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		int num = arr[i];
//		if (hashMap.find(num) == hashMap.end())
//		{
//			hashMap[num] = { 1, i };
//		}
//		else {
//			hashMap[num].count++;
//		}
//	}
//
//	// 将哈希表的键值对转移到 vector 中以便排序
//	vector<pair<int, ElementInfo>> freqVec(hashMap.begin(), hashMap.end());
//
//	sort(freqVec.begin(), freqVec.end(), compare);
//
//	// 提取排序后的元素并输出
//	for (size_t i = 0; i < freqVec.size(); ++i) {
//		cout << freqVec[i].first;
//		if (i < freqVec.size() - 1) { // 如果不是最后一个元素，输出逗号
//			cout << ",";
//		}
//	}
//}