#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
using namespace std;

struct ElementInfo {
	int count;   // ���ִ���
	int index;   // ��һ�γ��ֵ�λ��

};

bool compare(pair<int, ElementInfo>& a, pair<int, ElementInfo>& b)
{
	if (a.second.count == b.second.count)
	{
		return a.second.index < b.second.index;
	}
	return a.second.count > b.second.count; // �����ִ�������
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
//	// ����ϣ��ļ�ֵ��ת�Ƶ� vector ���Ա�����
//	vector<pair<int, ElementInfo>> freqVec(hashMap.begin(), hashMap.end());
//
//	sort(freqVec.begin(), freqVec.end(), compare);
//
//	// ��ȡ������Ԫ�ز����
//	for (size_t i = 0; i < freqVec.size(); ++i) {
//		cout << freqVec[i].first;
//		if (i < freqVec.size() - 1) { // ����������һ��Ԫ�أ��������
//			cout << ",";
//		}
//	}
//}