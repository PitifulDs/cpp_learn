#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

//// 定义火星人运算符
//unsigned long long marsOpHash(unsigned long long x, unsigned long long y) {
//	return 4 * x + 3 * y + 2;
//}
//
//unsigned long long marsOpDollar(unsigned long long x, unsigned long long y) {
//	return 2 * x + y + 3;
//}
//
//// 将捕获的运算结果返回
//string opMatch(const smatch& match)
//{
//	unsigned long long x = stoull(match[1]);
//	unsigned long long y = stoull(match[3]);
//
//	if (match[2].str() == "#") {
//		return to_string(marsOpHash(x, y));
//	}
//	else {
//		return to_string(marsOpDollar(x, y));
//	}
//}
//
//
//unsigned long long findExpression(string line)
//{
//	regex reg1("(\\d+)(#)(\\d+)");
//	regex reg2("(\\d+)($)(\\d+)");
//
//	smatch match;
//	string currentLine = line;
//
//	// 处理所有的#运算符
//	while (regex_search(currentLine, match, reg1))
//	{
//		string replacement = opMatch(match);
//		// match.prefix().str() 返回匹配前的字符串
//		// match.suffix().str() 返回匹配后的字符串
//		currentLine = match.prefix().str() + replacement + match.suffix().str();
//		/* 另一种构建方法
//		size_t match_pos = match.position(0);  // 匹配部分的起始位置
//		size_t match_len = match.length(0);    // 匹配部分的长度
//		// 构建新的字符串：前缀 + 替换内容 + 后缀
//		line = line.substr(0, match_pos) + replacement + line.substr(match_pos + match_len);
//		
//
//		// 另第二种构建方法
//		line.replace(match.position(0), match.length(0), replacement);
//		*/
//	}
//	
//	// 处理所有的$运算符
//	while (regex_search(currentLine, match, reg2))
//	{
//		string replacement = opMatch(match);
//		currentLine = match.prefix().str() + replacement + match.suffix().str();
//
//	}
//
//	return stoull(currentLine);
//}
//
//
//int main()
//{
//	string line;
//	getline(cin, line);
//
//	unsigned long long result = findExpression(line);
//
//   	cout << result << endl;
//}