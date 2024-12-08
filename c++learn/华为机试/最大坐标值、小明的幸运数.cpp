#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;

//int theMaxPos(vector<int>& orders, int m)
//{
//	int pos = 0;
//	int maxPos = pos;
//	for (auto& num : orders)
//	{
//		if(num < 0)
//		{
//			if (num == m)
//			{
//				pos += num - 1;
//				
//			}
//			else {
//				pos += num;
//				
//			}
//		}
//		else if(num>0) {
//			if (num == m)
//			{
//				pos += num + 1;
//				
//			}
//			else {
//				pos += num;
//				
//			}
//
//		}
//		maxPos = max(maxPos, pos);
//
//	}
//	return maxPos;
//}
//
//
//int main()
//{
//	int n; // 指令总数
//	cin >> n;
//	if (n < 1 || n>100)
//	{
//		cout << "12345" << endl;
//		return 0;
//	}
//
//	int m; // 幸运数
//	cin >> m;
//	if (m < -100 || m>100)
//	{
//		cout << "12345" << endl;
//		return 0;
//	}
//
//	vector<int> orders(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> orders[i];
//		if (orders[i] > 100 || orders[i] < -100)
//		{
//			cout << "12345" << endl;
//			return 0;
//		}
//	}
//
//	int result = theMaxPos(orders, m);
//
//	cout << result << endl;
//
//}