#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <regex>

using namespace std;


//int main()
//{
//    string line;
//    getline(cin, line);
//
//    regex reg("(-?\\d+)([+*-])(\\d+)");
//
//    int maxExpLen = 0;
//    long res = 0;
//
//    for (int i = 0; i < line.size(); i++)
//    {
//        // 如果从当前字符到字符串末尾的剩余长度小于等于 maxExpLen，
//        // 就可以提前结束循环，因为后续不可能找到更长的表达式。
//        if (line.size() - i <= maxExpLen)
//        {
//            break;
//        }
//
//        for (int j = i; j < line.size(); j++)
//        {
//            string sub = line.substr(i, j - i + 1);
//            smatch match;
//
//            if (regex_search(sub, match, reg) && sub.length() > maxExpLen)
//            {
//                maxExpLen = j - i + 1;
//                long op_num1 = stol(match[1]);
//                string op = match[2];
//                long op_num2 = stol(match[3]);
//                if (op == "*")
//                {
//                    res = op_num1 * op_num2;
//                }
//                else if (op == "+")
//                {
//                    res = op_num1 + op_num2;
//                }
//                else {
//                    res = op_num1 - op_num2;
//                }
//            }
//        }
//    }
//
//    cout << res << endl;
//
//
//}



//int main() {
//    string s;
//    getline(cin, s);
//
//    // 下面正则可得90%+通过率, 可以继续尝试下 r"([+-]?\d+)([+*-])(\d+)" 的通过率
//    regex reg("(-?\\d+)([+*-])(\\d+)"); // C++中\\表示一个\，所以需要两个\\
//
//    int maxExpLen = 0;
//    long ans = 0;
//
//    for (int i = 0; i < s.length(); i++) {
//
//        // 本题有大数量级用例，因此需要此步优化，不然通过率不高
//		  // 如果从当前字符到字符串末尾的剩余长度小于等于 maxExpLen，就可以提前结束循环，因为后续不可能找到更长的表达式。
//        if (s.length() - i <= maxExpLen) {
//            break;
//        }
//
//        for (int j = i; j < s.length(); j++) {
//            string sub = s.substr(i, j - i + 1);
//
//            smatch match;
//
//            if (regex_search(sub, match, reg) && sub.length() > maxExpLen) {
//                maxExpLen = j - i + 1;
//
//                long op_num1 = stol(match[1]);
//                string op = match[2];
//                long op_num2 = stol(match[3]);
//
//                if (op == "*") {
//                    ans = op_num1 * op_num2;
//                }
//                else if (op == "+") {
//                    ans = op_num1 + op_num2;
//                }
//                else if (op == "-") {
//                    ans = op_num1 - op_num2;
//                }
//            }
//        }
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}








//bool isOperatorChar(char ch)
//{
//	if (ch == '+' || ch == '-' || ch == '*')
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	string line;
//	getline(cin, line);
//
//	vector<pair<string, int>> res;
//	string tmp = "";
//	char lastChar;
//	char nextChar;
//	for (int i = 0; i < line.size(); i++)
//	{
//		char ch = line[i];
//		if (i + 1 <= line.size())
//		{
//           	nextChar = line[i + 1];
//		}
//		if (!tmp.empty())
//		{
//			lastChar = tmp.back();
//		}
//
//		if (isdigit(ch))
//		{
//			if (tmp.empty())
//			{
//   				tmp += ch;
//			}
//			else
//			{
//				if (isOperatorChar(lastChar) || isdigit(lastChar))
//				{
//                    tmp += ch;
//				}
//			}
//
//			if (isalpha(nextChar))
//			{
//				int n= tmp.size();
//				res.push_back(make_pair(tmp, n));
//				tmp.clear();
//			}
//		}
//		else if (isOperatorChar(ch) && !tmp.empty())
//		{
//			if (isOperatorChar(lastChar) || isOperatorChar(nextChar))
//			{
//				tmp.clear();
//				break;
//			}
//		}
//	}
//
//	int maxLen = 0;
//	for (auto& p : res)
//	{
//		maxLen = max(maxLen, p.second);
//	}
//
//	if(maxLen == 0) return 0;
//
//}
