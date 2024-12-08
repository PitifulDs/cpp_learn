#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// 结构体存储测试用例的ID和其优先级
struct TestCase {
	int id;			// 测试用例ID
	int priority;	// 测试用例优先级
};

// 比较函数，用于排序
bool compare(TestCase a, TestCase b)
{
	if (a.priority == b.priority)
	{
		return a.id < b.id;
	}
	return a.priority > b.priority;
}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> prioritys(n+1);// 存储每个特性的优先级
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> prioritys[i];
//	}
//	cin.ignore();
//
//	vector<TestCase> testCases(m); // 存储每个测试用例及其优先级
//	for (int i = 0; i < m; i++)
//	{
//		testCases[i].id = i + 1;
//		testCases[i].priority = 0;
//		
//		string line;
//		getline(cin, line);
//		stringstream ss(line);
//		int featureId;
//		while (ss >> featureId) {  // 逐个读取特性ID并计算优先级
//			testCases[i].priority += prioritys[featureId]; // 累加特性优先级
//		}
//
//	}
//
//	sort(testCases.begin(), testCases.end(), compare); // 按优先级排序
//
//	for (auto& testCase : testCases)
//	{
//		cout<< testCase.id << endl;
//	}
//}