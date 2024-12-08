#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;

int findAdress(vector<int>& stNums, int tarNum)
{
	int low = 0;
	int high = stNums.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (stNums[mid] == tarNum)
		{
			return mid+1;
		}
		else if (stNums[mid] > tarNum)
		{
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}

	}

	return low+1;
}

//int main()
//{
//	string line;
//	getline(cin, line);
//	stringstream ss(line);
//	vector<int> stNums;
//	int n;
//	while (ss >> n)
//	{
//		stNums.push_back(n);
//	}
//
//	int tarNum; // Ð¡Ã÷Ñ§ºÅ
//	cin >> tarNum;
//
//	int result = findAdress(stNums, tarNum);
//
//	cout << result << endl;
//
//}