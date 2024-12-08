#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int theWords(vector<string>& words, unordered_map<char, int>& charMap, int count)
{
	int wordsCount = 0;
	for (auto& str : words)
	{
		unordered_map<char, int> curMap = charMap;
		int curCount = 0; // charMap�����ڵ�Ԫ���� 
		for (auto& ch : str)
		{
			if (curMap.count(ch) != 0 && curMap[ch] != 0)
			{
				curMap[ch]--;
			}
			else if (curMap.count(ch) != 0 && curMap[ch] == 0)
			{
				curCount++;
			}
			else // Ԫ�ز�����
			{
				curCount++;
			}
		}

		if (curCount <= count) wordsCount++;
	}

	return wordsCount;
}

//int main()
//{
//	int N; // ���� words �ĸ���
//	cin >> N;
//
//	vector<string> words(N);
//	for (int i = 0; i < N; i++)
//	{
//		cin >> words[i];
//	}
//	cin.ignore();
//
//	string chars;
//	getline(cin, chars);
//	
//	unordered_map<char, int> charMap;
//	int count = 0; // ? ����
//	for (char ch : chars)
//	{
//		if (ch == '?') count++;
//
//		charMap[ch]++;
//	}
//
//	int result = theWords(words, charMap, count);
//
//	cout << result << endl;
//
//}

