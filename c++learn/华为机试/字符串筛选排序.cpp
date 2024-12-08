//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <unordered_map>
//
//using namespace std;
//
//bool compare(pair<int, int>& a, pair<int, int>& b)
//{
//	if (a.first != b.first)
//	{
//		return a.first < b.first;
//	}
//
//	return a.second < b.second;
//}
//
//int main()
//{
//	string s;
//	getline(cin, s);
//
//	string ss = s;
//	sort(ss.begin(), ss.end());
//
//	int k;
//	cin >> k;
//	if (k < 0) return 0;
//
//	vector<pair<int, int>> asciiValue;
//	for (int i=0; i<s.size(); i++)
//	{
//		char c = s[i];
//		int asc = static_cast<int>(c);
//		asciiValue.push_back({ asc,i });
//	}
//
//	sort(asciiValue.begin(), asciiValue.end(), compare);
//
//	if (k > s.size())
//	{
//		cout << asciiValue.back().second << endl;
//	}
//	else {
//
//		// 找到第 k 个最小 ASCII 值的字符
//		int targetIndex = k - 1;
//		char target = ss[targetIndex];
//		
//		cout << s.find(target) << endl;
//	}
//
//
//}
//
//
