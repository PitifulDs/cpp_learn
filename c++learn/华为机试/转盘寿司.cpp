#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<int> everyPrices(vector<int>& prices)
{
	vector<int> res;
	int n = prices.size();
	for (int i = 0; i < n; i++)
	{
		int temp = prices[i];
		for (int j = (i + 1) % n; j != i; j = (j + 1) % n)
		{
			if (prices[j] < prices[i])
			{
				temp = prices[j] + prices[i];
				break;
			}
		}
		res.push_back(temp);
	}
	return res;
}

//int main()
//{
//	string input;
//	getline(cin, input);
//	stringstream ss(input);
//	string str;
//	vector<int> prices;
//	while (getline(ss, str, ' '))
//	{
//		int pr = stoi(str);
//		prices.push_back(pr);
//	}
//
//	vector<int> res = everyPrices(prices);
//	for (auto& str : res)
//	{
//		cout << str << ' ';
//	}
//
//
//}



