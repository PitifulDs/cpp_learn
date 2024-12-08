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
//		// ʹ�� stringstream �� getline �ָ� URL
//		while (getline(ss, segement, '/'))
//		{
//			if (segement.empty()) continue;
//
//			currentLevel++;
//
//			// ��鵱ǰ�㼶�Ƿ�ΪĿ��㼶
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
//					currentLevel++; // �㼶����
//
//					// ��鵱ǰ�㼶�Ƿ�ΪĿ��㼶
//					if (currentLevel == level) {
//						if (segment == keyword) {
//							count++;
//						}
//						break; // �ҵ�Ŀ��㼶�����ֹͣ��һ������
//					}
//					segment = ""; // ��յ�ǰ���Դ�����һ���㼶
//				}
//			}
//			else {
//				segment += ch; // ����ַ�����ǰ��
//			}
//		}
//
//		// ������������ URL �����һ��û���� '/' ��������Ҫ�ֶ����
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
//	cin >> n;	// ��ʷ��־����
//
//	vector<string> urls(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> urls[i];
//	}
//	
//	int l; // ���һ��Ϊ�㼶
//	string keyword;	// ��ѯ�ؼ���
//	cin >> l >> keyword;
//
//	// int result = oldStatisticsKeys(urls, l, keyword);
//	int result = newStatisticsKeys(urls, l, keyword);
//	cout << result << endl;
//
//}