#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;
//
//bool compareFrequency(pair<int, int>& a, pair<int, int>& b)
//{
//	if (a.second != b.second)
//	{
//		return a.second > b.second;
//	}
//
//	return a.first < b.first;
//}
//
//int main()
//{
//	int N; // 访存序列的记录条数
//	cin >> N;
//
//
//	vector<int> memList(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> memList[i];
//	}
//
//	int T; // 冷热阈值
//	cin >> T;
//
//	unordered_map<int, int> hashMap;
//	for (auto& n : memList)
//	{
//		hashMap[n]++;
//	}	
//
//	vector<pair<int, int>> res;
//	for (auto& p : hashMap)
//	{
//		int num = p.second;
//		if (num >= T)
//		{
//			res.push_back({ p.first,p.second });
//		}
//
//	}
//
//	sort(res.begin(), res.end(), compareFrequency);
//
//	if(res.size() !=0 )
//	{
//		cout << res.size() << endl;
//		for (auto& n : res)
//		{
//			cout << n.first << endl;
//		}
//	}
//	else {
//		cout << "0" << endl;
//	}
//
//}