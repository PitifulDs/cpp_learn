#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;

//int main()
//{
//	string  s;
//	getline(cin, s);
//
//	int n = s.length();
//
//
//	int left = 0;
//	int maxLen = -1;
//	int countLetter = 0;
//	int countDigit = 0;
//	for (int right = 0; right < n; right++)
//	{
//		if (isalpha(s[right]))
//		{
//			countLetter++;
//		}
//		else {
//			countDigit++;
//		}
//
//		// 如果字母数超过1个，则移动左边界
//		while (countLetter > 1)
//		{
//			if (isalpha(s[left]))
//			{
//				countLetter--;
//			}
//			left++;
//		}
//
//		if (countLetter == 1 && countDigit != 0)
//		{
//			maxLen = max(maxLen, right - left + 1);
//		}
//
//	}
//
//	
//
//	cout << maxLen << endl;
//
//}
//

