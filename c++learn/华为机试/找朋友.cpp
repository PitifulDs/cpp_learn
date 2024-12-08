//#include <iostream>
//#include <vector>
//#include <string>
//#include <sstream>
//#include <stack>
//using namespace std;
//
//vector<int> findFriends(vector<int> heights)
//{
//	int n = heights.size();
//	vector<int> res(n,0);
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (heights[i] < heights[j])
//			{
//				res[i] = j;
//				break;
//			}
//			else {
//				continue;
//			}
//		}
//	}
//	//res.push_back(0);
//	return res;
//
//}
///*优化代码*/
////vector<int> findFriends(const vector<int>& heights) {
////	int n = heights.size();
////	vector<int> res(n, 0); // 初始化结果数组，默认值为0
////	stack<int> s; // 单调栈存储小朋友的索引
////
////	// 从左到右遍历身高数组
////	for (int i = 0; i < n; ++i) {
////		// 当栈不为空且当前身高大于栈顶元素对应的身高时
////		while (!s.empty() && heights[i] > heights[s.top()]) {
////			res[s.top()] = i + 1; // i是栈顶元素小朋友的好朋友，记录索引
////			s.pop(); // 弹出栈顶元素
////		}
////		s.push(i); // 将当前索引压入栈
////	}
////
////	return res;
////}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> heights(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> heights[i];
//	}
//
//	vector<int> result = findFriends(heights);
//	cout << "Heights:";
//	for (auto& n : heights)
//	{
//		cout << n << ' ';
//	}
//	cout << endl;
//	for (auto& n : result)
//	{
//		cout << n << ' ';
//	}
//
//}