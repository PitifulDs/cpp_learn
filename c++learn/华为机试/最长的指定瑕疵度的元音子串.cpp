#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

//bool isVowel(char c)
//{
//	unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//	return vowels.find(c) != vowels.end();
//}
//
//
//int main()
//{
//	int flaw;
//	cin >> flaw;
//	cin.ignore();
//
//	string s;
//	getline(cin, s);
//
//	int maxLength = 0;
//	int left = 0;
//	int flawCount = 0;
//	for (int right = 0; right < s.length(); right++)
//	{
//		// 如果是非元音字符，增加瑕疵度计数
//		if (!isVowel(s[right])) {
//			flawCount++;
//		}
//		
//		// 调整左边界，使得瑕疵度不超过flaw
//		while (flawCount > flaw)
//		{
//			// 检查当前左边界 left 指向的字符是否为非元音字符
//			if (!isVowel(s[left]))
//			{
//				flawCount--;
//			}
//			left++;
//		}
//
//		if (isVowel(s[left]) && isVowel(s[right]) && flawCount == flaw)
//		{
//			maxLength = max(maxLength, right - left + 1);
//		}
//
//
//	}
//
//	cout << maxLength << endl;
//
//}
//
