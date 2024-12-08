//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <sstream>
//#include <set>
//using namespace std;
//
//set<string> theWholeWords(vector<string>& words, string& preWord)
//{
//	set<string> res;
//	int n = preWord.length();
//	for (auto& str : words)
//	{
//		if (str.size() < n) continue;
//		string temp = str.substr(0, n);
//		if (temp == preWord)
//		{
//			res.insert(str);
//		}
//	}
//
//	return res;
//}
//
//int main()
//{
//	string line;
//	getline(cin, line);
//	for (auto& c : line)
//	{
//		if (ispunct(c))
//		{
//			c = ' ';
//		}
//	}
//
//	vector<string> words;
//	stringstream ss(line);	
//	string temp;
//	while (getline(ss, temp, ' '))
//	{
//		words.push_back(temp);
//	}
//
//	string preWord;
//	getline(cin, preWord);
//
//	set<string> result = theWholeWords(words, preWord);
//
//	if (result.size() == 0)
//	{
//		cout << preWord << endl;
//	}
//	else
//	{
//		for (auto& str : result)
//		{
//			cout << str << ' ';
//		}
//	}
//}