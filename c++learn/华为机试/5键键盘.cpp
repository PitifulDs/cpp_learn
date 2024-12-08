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
		if (n == 1 && select.empty())	// 输入a,未选中任何内容
		{
			screen += "a";
		}
		else if (n == 1 && !select.empty())	// 输入a,选中任何内容，替换为a
		{
			select = "a";
			screen = select;
			select.clear();
		}
		if (n == 2 && !screen.empty() && !select.empty()) // 复制，选中内容，剪切板替换为选中的内容
		{
			clipboard = select;
		}
		if (n == 3 && !screen.empty() && !select.empty())	// 剪切，选中内容，剪切板替换为选中的内容，屏幕清空选中的内容
		{
			clipboard = select;
			screen.clear();
			select.clear();
		}
		if (n == 4 && !select.empty() && clipboard.empty()) // 粘贴，选中内容，但剪切板为空
		{
			screen.clear();
		}
		else if (n == 4 && !select.empty() && !clipboard.empty())// 粘贴，选中内容，剪切板不为空
		{
			screen = clipboard;
			select.clear();
		}
		else if (n == 4 && !clipboard.empty()) // 粘贴，不要选中，剪切板不为空
		{
			screen += clipboard;
		}
		if (n == 5 && !screen.empty())	// 选中所有，屏幕不为空
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
