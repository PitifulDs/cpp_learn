#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

//unsigned long marsSharp(unsigned long x, unsigned long y)
//{
//	return 2 * x + 3 * y + 4;
//}
//
//unsigned long marsDoll(unsigned long x, unsigned long y)
//{
//	return 3 * x + y + 2;
//}
//
//// 将捕获的运算结果返回
//string caculateExp(const smatch& match)
//{
//	unsigned long x = stoul(match[1]);
//	unsigned long y = stoul(match[3]);
//	if (match[2].str() == "$")
//	{
//		return to_string(marsDoll(x, y));
//	}
//	else {
//		return to_string(marsSharp(x, y));
//	}
//
//}
//
//unsigned long findExperssion(string& s)
//{
//	string curS = s;
//	regex reg1("(\\d+)(\\$)(\\d+)"); // 匹配 x$y
//	regex reg2("(\\d+)(\\#)(\\d+)"); // 匹配 x#y
//
//	smatch match;
//	while (regex_search(curS, match, reg1))
//	{
//		string temp = caculateExp(match);
//		curS.replace(match.position(0), match.length(0), temp);
//	}
//
//	while (regex_search(curS, match, reg2))
//	{
//		string temp = caculateExp(match);
//		curS.replace(match.position(0), match.length(0), temp);
//	}
//
//	return stoul(curS);
//}
//
//
//int main()
//{
//	string str;
//	getline(cin, str);
//
//	unsigned long  result;
//	result = findExperssion(str);
//
//	cout << result << endl;
//
//
//}