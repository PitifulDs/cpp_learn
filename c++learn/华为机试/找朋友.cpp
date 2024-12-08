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
///*�Ż�����*/
////vector<int> findFriends(const vector<int>& heights) {
////	int n = heights.size();
////	vector<int> res(n, 0); // ��ʼ��������飬Ĭ��ֵΪ0
////	stack<int> s; // ����ջ�洢С���ѵ�����
////
////	// �����ұ����������
////	for (int i = 0; i < n; ++i) {
////		// ��ջ��Ϊ���ҵ�ǰ��ߴ���ջ��Ԫ�ض�Ӧ�����ʱ
////		while (!s.empty() && heights[i] > heights[s.top()]) {
////			res[s.top()] = i + 1; // i��ջ��Ԫ��С���ѵĺ����ѣ���¼����
////			s.pop(); // ����ջ��Ԫ��
////		}
////		s.push(i); // ����ǰ����ѹ��ջ
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