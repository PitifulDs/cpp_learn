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
//		// ����Ƿ�Ԫ���ַ�������覴öȼ���
//		if (!isVowel(s[right])) {
//			flawCount++;
//		}
//		
//		// ������߽磬ʹ��覴öȲ�����flaw
//		while (flawCount > flaw)
//		{
//			// ��鵱ǰ��߽� left ָ����ַ��Ƿ�Ϊ��Ԫ���ַ�
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
