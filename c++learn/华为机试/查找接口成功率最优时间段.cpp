#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> theLongestTime(int minAverageLost, vector<int>& lostRates)
{
	vector<string> res;
	int len = lostRates.size();
	int maxLen = 0;

	// 前缀和数组
	vector<int> prefixSum(len + 1, 0);
	for (int i = 0; i < len; i++)
	{
		prefixSum[i + 1] = prefixSum[i] + lostRates[i];
		//cout << prefixSum[i + 1] << " ";
	}

	// 双重循环检查所有可能的区间
	for (int left = 0; left < len; left++)
	{
		for (int right = left; right < len; right++)
		{
			int sum = prefixSum[right + 1] - prefixSum[left]; // 区间和
			double averageLost = static_cast<double>(sum) / (right - left + 1);
			if (averageLost <= minAverageLost)
			{
				int curLen = right - left + 1;
				if (curLen > maxLen)
				{
					res.clear(); // 清空之前的结果
					res.push_back(to_string(left) + "-" + to_string(right));
					maxLen = curLen;
				}
				else if (curLen == maxLen)
				{
					res.push_back(to_string(left) + "-" + to_string(right));  // 记录相同长度的区间
				}
			
			}

		}


	}
	return res;
}

//int main()
//{
//	int minAverageLost;
//	cin >> minAverageLost;
//	cin.ignore();
//
//	string line;
//	getline(cin, line);
//	stringstream ss(line);
//	int n;
//	vector<int> lostRates;
//	while (ss >> n)
//	{
//		lostRates.push_back(n);
//	}
//
//	vector<string> result = theLongestTime(minAverageLost, lostRates);
//
//	if (result.empty()) {
//		cout << "NULL" << endl;
//	}
//	else {
//		for (size_t i = 0; i < result.size(); ++i) {
//			cout << result[i] << ' ';
//		}
//		cout << endl;
//	}
//	
//}
