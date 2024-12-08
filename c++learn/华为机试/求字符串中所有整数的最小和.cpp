#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>
#include <regex>
using namespace std;

//int main()
//{
//	string s;
//	getline(cin, s);
//
//	vector<long> nums;
//
//	regex reg("(-?\\d+)");
//
//	smatch match;
//	string curS = s;
//	long sum = 0;
//	while (regex_search(curS, match, reg))
//	{
//		string numStr = match.str();
//		long num;
//		if (numStr[0] == '-')
//		{
//			num = stol(numStr);
//			sum += num;
//		}
//		else {
//			int cursum = 0;
//			for (char c : numStr)
//			{
//				sum += (c - '0');
//			}
//		}
//		// ÒÆ³ýÒÑ¾­Æ¥ÅäµÄ²¿·Ö¼ÌÐøÆ¥ÅäÊ£Óà×Ö·û´®
//		curS = match.suffix().str();
//	}
//
//	cout << sum << endl;
//
//}