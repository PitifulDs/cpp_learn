#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int theMostNum(vector<int> nums)
{
	vector<int> newNums;
	unordered_map<int, int> hashMap;
	for (auto& n : nums)
	{
		hashMap[n]++;
	}

	int maxCount = 0;
	for (const auto& pair : hashMap)
		maxCount = max(maxCount, pair.second);

	for (auto& pair : hashMap)
	{
		if (pair.second == maxCount)
		{
			newNums.push_back(pair.first);
		}
	}

	int res = 0;
	if (newNums.size() == 1) return res = newNums[0];
	else {
		sort(newNums.begin(), newNums.end());
		int len = newNums.size();
		int middle = len % 2;
		if(middle == 0)
			return (newNums[len / 2 - 1] + newNums[len / 2]) / 2;
		else
			return res = newNums[len / 2];
	}


}

//int main()
//{
//	vector<int> nums;
//	string input;
//	getline(cin, input);
//	stringstream ss(input);
//	string n;
//
//	while (getline(ss, n, ' '))
//	{
//		nums.push_back(stoi(n));
//	}
//
//	int result = theMostNum(nums);
//	cout << result << endl;
//
//}




