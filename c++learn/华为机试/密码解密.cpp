//#include<iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
///*
//����һ�Ρ����ġ��ַ��� s�������ַ����Ǿ��������뱾��ӳ��ģ�����Ҫ�������ġ����ܲ������
//
//ӳ��Ĺ��򣨡�a�� ~ ��i�����ֱ��ã���1�� ~ ��9������ʾ������j�� ~ ��z�����ֱ��ã���10*�� ~ ��26*������ʾ��
//
//Լ����ӳ��ʼ��Ψһ��
//
//��������
//�����ġ��ַ�����20*19*20*
//
//�������
//�����ַ�����tst
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
//			result += mapping[ciphertext.substr(i, 3)]; // ��i��ʼ��ȡ�����ַ�
//			i += 2;
//		}
//		else {
//			 result += mapping[string(1, ciphertext[i])]; // �������ַ� ciphertext[i] ת��Ϊһ���ַ���
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
//	// ӳ������ֵ���ĸ��ӳ��
//	unordered_map<string, char> mapping = {
//		{"1", 'a'}, {"2", 'b'}, {"3", 'c'}, {"4", 'd'}, {"5", 'e'},
//		{"6", 'f'}, {"7", 'g'}, {"8", 'h'}, {"9", 'i'},
//		{"10", 'j'}, {"11", 'k'}, {"12", 'l'}, {"13", 'm'}, {"14", 'n'},
//		{"15", 'o'}, {"16", 'p'}, {"17", 'q'}, {"18", 'r'}, {"19", 's'},
//		{"20", 't'}, {"21", 'u'}, {"22", 'v'}, {"23", 'w'}, {"24", 'x'},
//		{"25", 'y'}, {"26", 'z'}
//	};
//
//	string plainText = ""; // ���ܺ������
//	string number = ""; // ��ʱ�洢����
//
//	for (int i = 0; i < cipherText.length(); i++)
//	{
//		if (isdigit(cipherText[i]))
//		{
//			number += cipherText[i]; // �����ַ���
//		}
//		else if (cipherText[i] == '*')
//		{
//			// ���� * ˵��ǰ�����һ����λ����j-z��
//			if (!number.empty() && mapping.find(number) != mapping.end())
//			{
//				plainText += mapping[number]; // ׷�Ӷ�Ӧ�ַ�
//				number.clear(); // ��ջ���
//			}
//		}
//	}
//	// �������һ���ַ������û�� * ��β��
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
//	string plainText = decryptMessage(cipherText); // ����
//
//	cout << plainText << endl; // �������
//}