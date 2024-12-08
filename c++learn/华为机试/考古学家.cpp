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
//		used[i] = true; // 标记当前碎片已使用
//		curContent += vstr[i];
//		backTrace(vstr, res, curContent, used, index+1);
//		curContent.erase(curContent.size() - vstr[i].size());// 回溯，删除刚添加的碎片内容
//		used[i] = false; // 回溯，标记当前碎片未使用
//	}
//
//
//}
//
//vector<string> contentConbination(vector<string>& vstr)
//{
//	vector<string> res;
//	string curContent;
//	vector<bool> used(vstr.size(), false); // 用于标记每个碎片是否已使用
//	int index = 0;
//	backTrace(vstr, res, curContent, used, index);
//	return res;
//}
//
//int main()
//{
//	int n;	// 石碑碎片数量
//	cin >> n;
//	string str;	// 石碑内容
//	vector<string> vstr(n);	// 存储石碑内容
//	for (int i = 0; i < n; i++)
//	{
//		cin >> vstr[i];
//	}
//
//	vector<string> result = contentConbination(vstr);
//	sort(result.begin(), result.end());
//	result.erase(unique(result.begin(), result.end()), result.end()); // 去重
//	for (auto& str : result)
//	{
//		cout<< str << endl;
//	}
//
//
//}

