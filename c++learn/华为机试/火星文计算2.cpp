#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

//// ��������������
//unsigned long long marsOpHash(unsigned long long x, unsigned long long y) {
//	return 4 * x + 3 * y + 2;
//}
//
//unsigned long long marsOpDollar(unsigned long long x, unsigned long long y) {
//	return 2 * x + y + 3;
//}
//
//// �����������������
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
//	// �������е�#�����
//	while (regex_search(currentLine, match, reg1))
//	{
//		string replacement = opMatch(match);
//		// match.prefix().str() ����ƥ��ǰ���ַ���
//		// match.suffix().str() ����ƥ�����ַ���
//		currentLine = match.prefix().str() + replacement + match.suffix().str();
//		/* ��һ�ֹ�������
//		size_t match_pos = match.position(0);  // ƥ�䲿�ֵ���ʼλ��
//		size_t match_len = match.length(0);    // ƥ�䲿�ֵĳ���
//		// �����µ��ַ�����ǰ׺ + �滻���� + ��׺
//		line = line.substr(0, match_pos) + replacement + line.substr(match_pos + match_len);
//		
//
//		// ��ڶ��ֹ�������
//		line.replace(match.position(0), match.length(0), replacement);
//		*/
//	}
//	
//	// �������е�$�����
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