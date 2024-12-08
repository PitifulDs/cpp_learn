#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>	

using namespace std;

/* �������ж��ٸ�С���� */
int theCommunities(vector<int>& gardens)
{
	int totalKids = 0;
	unordered_map<int, int> kidsMap;// ��¼ÿ�ַ������ֵĴ���
	for (auto& garden : gardens)
	{
		kidsMap[garden]++;
	}

	// ��������С������
	for (auto& kids : kidsMap)
	{
		int key = kids.first;
		int value = kids.second;
		int groupSize = key + 1;// С��ʵ������
		int groupNum = ceil(static_cast<double>(value)/groupSize);// С������,����ȡ��
		totalKids += groupNum * groupSize; // �ۼ���ЩС���е�С��������

	}
	return totalKids;

}

//int main()
//{
//	int n;
//	vector<int> gardens;
//	while (cin >> n)
//	{
//		gardens.push_back(n);
//	}
//
//
//	int result = theCommunities(gardens);
//	cout << result << endl;
//
//}
