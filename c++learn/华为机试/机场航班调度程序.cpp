#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

//// 自定义排序规则
//bool customCompare(const std::string& flight1, const std::string& flight2) {
//	// 比较航空公司缩写（前两位）
//	if (flight1.substr(0, 2) != flight2.substr(0, 2)) {
//		return flight1.substr(0, 2) < flight2.substr(0, 2);
//	}
//	// 如果航空公司相同，则比较后四位数字
//	return flight1.substr(2) < flight2.substr(2);
//}
//
//vector<string> airSequence(vector<string>& airlineInfo)
//{
//	sort(airlineInfo.begin(), airlineInfo.end(), customCompare);
//	
//	return airlineInfo;
//}
//
//
//int main()
//{
//	string line;
//	getline(cin, line);
//
//	vector<string> airlineInfo;
//	stringstream ss(line);
//	string temp;
//	while (getline(ss, temp, ','))
//	{
//		airlineInfo.push_back(temp);
//	}
//
//	vector<string> result = airSequence(airlineInfo);
//
//	for (int i = 0; i < result.size(); i++)
//	{
//		if (i == result.size() - 1)
//		{
//			cout << result[i];
//		}
//		else {
//			cout << result[i] << ',';
//		}
//
//	}
//}