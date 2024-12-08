#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
/*
	1: a
	2: ctrl-c
	3: ctrl-x
	4: ctrl-v
	5: ctrl-a

*/

int alphaNums(vector<int>& Inputs)
{
	string clipboard = "";
	string screen = "";
	string select = "";
	for (auto& n : Inputs)
	{
		if (n == 1 && select.empty())	// ����a,δѡ���κ�����
		{
			screen += "a";
		}
		else if (n == 1 && !select.empty())	// ����a,ѡ���κ����ݣ��滻Ϊa
		{
			select = "a";
			screen = select;
			select.clear();
		}
		if (n == 2 && !screen.empty() && !select.empty()) // ���ƣ�ѡ�����ݣ����а��滻Ϊѡ�е�����
		{
			clipboard = select;
		}
		if (n == 3 && !screen.empty() && !select.empty())	// ���У�ѡ�����ݣ����а��滻Ϊѡ�е����ݣ���Ļ���ѡ�е�����
		{
			clipboard = select;
			screen.clear();
			select.clear();
		}
		if (n == 4 && !select.empty() && clipboard.empty()) // ճ����ѡ�����ݣ������а�Ϊ��
		{
			screen.clear();
		}
		else if (n == 4 && !select.empty() && !clipboard.empty())// ճ����ѡ�����ݣ����а岻Ϊ��
		{
			screen = clipboard;
			select.clear();
		}
		else if (n == 4 && !clipboard.empty()) // ճ������Ҫѡ�У����а岻Ϊ��
		{
			screen += clipboard;
		}
		if (n == 5 && !screen.empty())	// ѡ�����У���Ļ��Ϊ��
		{
			select = screen;
		}

	
	}
	int len = screen.size();
	return len;
}

//int main()
//{
//	string input;
//	getline(cin, input);
//	
//	stringstream ss(input);
//	string str;
//	vector<int> Inputs;
//	while (getline(ss, str, ' '))
//	{
//		Inputs.push_back(stoi(str));
//	}
//	
//	int result = alphaNums(Inputs);
//	cout << result << endl;
//
//}
