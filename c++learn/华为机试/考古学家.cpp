#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//void backTrace(vector<string>& vstr, vector<string>& res, string& curContent, 
//	vector<bool>& used, int index)
//{
//	if (index == vstr.size())
//	{
//        res.push_back(curContent);
//        return;
//	}
//
//	for (int i = 0; i < vstr.size(); i++)
//	{
//		if(used[i] == true) continue;
//		used[i] = true; // ��ǵ�ǰ��Ƭ��ʹ��
//		curContent += vstr[i];
//		backTrace(vstr, res, curContent, used, index+1);
//		curContent.erase(curContent.size() - vstr[i].size());// ���ݣ�ɾ������ӵ���Ƭ����
//		used[i] = false; // ���ݣ���ǵ�ǰ��Ƭδʹ��
//	}
//
//
//}
//
//vector<string> contentConbination(vector<string>& vstr)
//{
//	vector<string> res;
//	string curContent;
//	vector<bool> used(vstr.size(), false); // ���ڱ��ÿ����Ƭ�Ƿ���ʹ��
//	int index = 0;
//	backTrace(vstr, res, curContent, used, index);
//	return res;
//}
//
//int main()
//{
//	int n;	// ʯ����Ƭ����
//	cin >> n;
//	string str;	// ʯ������
//	vector<string> vstr(n);	// �洢ʯ������
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vstr[i];
//	}
//
//	vector<string> result = contentConbination(vstr);
//	sort(result.begin(), result.end());
//	result.erase(unique(result.begin(), result.end()), result.end()); // ȥ��
//	for (auto& str : result)
//	{
//		cout<< str << endl;
//	}
//
//
//}

