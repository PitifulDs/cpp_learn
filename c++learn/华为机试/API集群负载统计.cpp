//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//int newStatisticsKeys(vector<string>& urls, int level, string& keyword)
//{
//	int count = 0;
//
//	for (auto& str : urls)
//	{
//		int currentLevel = 0;
//		stringstream ss(str);
//		string segement;
//		// 使用 stringstream 和 getline 分割 URL
//		while (getline(ss, segement, '/'))
//		{
//			if (segement.empty()) continue;
//
//			currentLevel++;
//
//			// 检查当前层级是否为目标层级
//			if (currentLevel == level)
//			{
//				if (segement == keyword)
//				{
//					count++;
//				}
//				break;
//			}
//		}
//	}
//	return count;
//
//}
//
//int oldStatisticsKeys(vector<string>& urls, int level,string& keyword)
//{
//	int count = 0;
//	for (auto& str : urls)
//	{
//		int currentLevel = 0;
//		string segment = "";
//		for (auto& ch : str)
//		{
//			if (ch == '/')
//			{
//				if (!segment.empty()) {
//					currentLevel++; // 层级递增
//
//					// 检查当前层级是否为目标层级
//					if (currentLevel == level) {
//						if (segment == keyword) {
//							count++;
//						}
//						break; // 找到目标层级后可以停止进一步处理
//					}
//					segment = ""; // 清空当前段以处理下一个层级
//				}
//			}
//			else {
//				segment += ch; // 添加字符到当前段
//			}
//		}
//
//		// 特殊情况：如果 URL 的最后一段没有以 '/' 结束，需要手动检查
//		if (!segment.empty() && currentLevel + 1 == level) 
//		{
//			if (segment == keyword) 
//			{
//				count++;
//			}
//		}
//
//	}
//
//	return count;
//}
//
//
//
//
//int main()
//{
//	int n; 
//	cin >> n;	// 历史日志条数
//
//	vector<string> urls(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> urls[i];
//	}
//	
//	int l; // 最后一行为层级
//	string keyword;	// 查询关键字
//	cin >> l >> keyword;
//
//	// int result = oldStatisticsKeys(urls, l, keyword);
//	int result = newStatisticsKeys(urls, l, keyword);
//	cout << result << endl;
//
//}