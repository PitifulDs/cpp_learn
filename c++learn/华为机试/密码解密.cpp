//#include<iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
///*
//给定一段“密文”字符串 s，其中字符都是经过“密码本”映射的，现需要将“密文”解密并输出。
//
//映射的规则（‘a’ ~ ‘i’）分别用（‘1’ ~ ‘9’）表示；（‘j’ ~ ‘z’）分别用（“10*” ~ “26*”）表示。
//
//约束：映射始终唯一。
//
//输入描述
//“密文”字符串：20*19*20*
//
//输出描述
//明文字符串：tst
//
//*/
//
//string decryptMessage(string& ciphertext)
//{
//	unordered_map<string, char> mapping;
//	for (int i = 1; i <= 9; i++)
//	{
//		mapping[to_string(i)] = 'a' + i - 1;
//	}
//	for (int i = 10; i <= 26; ++i) {
//		mapping[to_string(i) + "*"] = 'a' + i - 1;
//	}
//
//	string result;
//	for (int i = 0; i < ciphertext.size(); i++)
//	{
//		if (i + 2 < ciphertext.size() && ciphertext[i + 2] == '*')
//		{
//			result += mapping[ciphertext.substr(i, 3)]; // 从i开始提取三个字符
//			i += 2;
//		}
//		else {
//			 result += mapping[string(1, ciphertext[i])]; // 将单个字符 ciphertext[i] 转换为一个字符串
//			string key = "" + ciphertext[i];
//			result += mapping[key];
//		}
//	}
//
//	return result;
//
//}
//
//
//string decryptMessage(const string& cipherText)
//{
//	// 映射表：数字到字母的映射
//	unordered_map<string, char> mapping = {
//		{"1", 'a'}, {"2", 'b'}, {"3", 'c'}, {"4", 'd'}, {"5", 'e'},
//		{"6", 'f'}, {"7", 'g'}, {"8", 'h'}, {"9", 'i'},
//		{"10", 'j'}, {"11", 'k'}, {"12", 'l'}, {"13", 'm'}, {"14", 'n'},
//		{"15", 'o'}, {"16", 'p'}, {"17", 'q'}, {"18", 'r'}, {"19", 's'},
//		{"20", 't'}, {"21", 'u'}, {"22", 'v'}, {"23", 'w'}, {"24", 'x'},
//		{"25", 'y'}, {"26", 'z'}
//	};
//
//	string plainText = ""; // 解密后的明文
//	string number = ""; // 临时存储数字
//
//	for (int i = 0; i < cipherText.length(); i++)
//	{
//		if (isdigit(cipherText[i]))
//		{
//			number += cipherText[i]; // 数字字符串
//		}
//		else if (cipherText[i] == '*')
//		{
//			// 遇到 * 说明前面的是一个两位数（j-z）
//			if (!number.empty() && mapping.find(number) != mapping.end())
//			{
//				plainText += mapping[number]; // 追加对应字符
//				number.clear(); // 清空缓存
//			}
//		}
//	}
//	// 处理最后一个字符（如果没有 * 结尾）
//	if (!number.empty() && mapping.find(number) != mapping.end()) {
//		plainText += mapping[number];
//	}
//
//	return plainText;
//
//}
//
//int main()
//{
//	string cipherText;
//	cin >> cipherText;
//
//	string plainText = decryptMessage(cipherText); // 解密
//
//	cout << plainText << endl; // 输出明文
//}