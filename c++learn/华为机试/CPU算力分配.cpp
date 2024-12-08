#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <unordered_set>
#include <numeric>
using namespace std;

pair<int, int> matchComPower(vector<int> computingPowerL1, vector<int> computingPowerL2, int targetDiff)
{
	// ʹ��unordered_set��¼B��������е�����
	unordered_set<int> setB(computingPowerL2.begin(), computingPowerL2.end());
	sort(computingPowerL1.begin(), computingPowerL1.end());
	for (int a : computingPowerL1)
	{
		// ������Ҫ��B�����ҵ���Ŀ��ֵ
		int b = a - targetDiff;
		//  // �����B�����ҵ��˸�Ŀ��ֵ������һ��ֵ
		if (setB.find(b) != setB.end())
		{
			return make_pair(a, b);
		}

	}
	
	return { -1, -1 }; // �����ϲ��ᵽ�����Ϊ��Ŀ��֤�˴𰸴���

}

//int main()
//{
//	int l1, l2;
//	cin >> l1 >> l2;
//
//	vector<int> computingPowerL1(l1);
//	vector<int> computingPowerL2(l2);
//	for (int i = 0; i < l1; i++)
//	{
//		cin >> computingPowerL1[i];
//	}
//
//	for (int i = 0; i < l2; i++)
//	{
//		cin >> computingPowerL2[i];
//	}
//
//	int sumPowerL1 = accumulate(computingPowerL1.begin(), computingPowerL1.end(), 0);
//	int sumPowerL2 = accumulate(computingPowerL2.begin(), computingPowerL2.end(), 0);
//
//	// �����������Ĳ�ֵ,�����Ȼ�н�,һ��������2
//	int diff = sumPowerL1 - sumPowerL2;
//
//	pair<int, int> result = matchComPower(computingPowerL1, computingPowerL2, diff/2);
//	cout << result.first << " " << result.second << endl;
//
//}