#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// �ṹ��洢����������ID�������ȼ�
struct TestCase {
	int id;			// ��������ID
	int priority;	// �����������ȼ�
};

// �ȽϺ�������������
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
//	vector<int> prioritys(n+1);// �洢ÿ�����Ե����ȼ�
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> prioritys[i];
//	}
//	cin.ignore();
//
//	vector<TestCase> testCases(m); // �洢ÿ�����������������ȼ�
//	for (int i = 0; i < m; i++)
//	{
//		testCases[i].id = i + 1;
//		testCases[i].priority = 0;
//		
//		string line;
//		getline(cin, line);
//		stringstream ss(line);
//		int featureId;
//		while (ss >> featureId) {  // �����ȡ����ID���������ȼ�
//			testCases[i].priority += prioritys[featureId]; // �ۼ��������ȼ�
//		}
//
//	}
//
//	sort(testCases.begin(), testCases.end(), compare); // �����ȼ�����
//
//	for (auto& testCase : testCases)
//	{
//		cout<< testCase.id << endl;
//	}
//}