#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

struct OpenSource
{
	string name;   // ��Ŀ��
	int watch;     // ��ע
	int star;      // �ղ�
	int fork;      // fork
	int issue;     // issue
	int mr;        // merge

	OpenSource(string n, int w, int s, int f, int i, int m)
		: name(n), watch(w), star(s), fork(f), issue(i), mr(m) {}
};

//bool compare(pair<string, int>& a, pair<string, int>& b)
//{
//	if (a.second != b.second)
//	{
//		return a.second > b.second;  // ��� a ��Ȩ�ش��� b ��Ȩ�أ����� true
//	}
//	else {
//		string lowerAName;
//		for (const auto& c : a.first)
//		{
//			lowerAName.push_back(tolower(c));
//		}
//
//		string lowerBName;
//		for (const auto& c : b.first)
//		{
//			lowerBName.push_back(tolower(c));
//		}
//
//		return lowerAName < lowerBName;
//	}
//}

//vector<pair<string, int>> theHotPro(vector<int>& weights, vector<OpenSource>& projects)
//{
//	vector<pair<string, int>> res;
//
//	int maxWeight = 0;
//
//	for (int i = 0; i < projects.size(); i++)
//	{
//		string first = projects[i].name;
//
//		int curWatch = projects[i].watch;
//		int curStar = projects[i].star;
//		int curFork = projects[i].fork;
//		int curIssue = projects[i].issue;
//		int curMr = projects[i].mr;
//
//		int curWeight = curWatch * weights[0] + curStar * weights[1] + curFork * weights[2]
//			+ curIssue * weights[3] + curMr * weights[4];
//
//		res.push_back({ first, curWeight });
//
//	}
//
//	sort(res.begin(), res.end(), compare);
//
//
//	return res;
//}


//int main()
//{
//	int N; // ��Դ��Ŀ����
//	cin >> N;
//
//	vector<int> weights(5); // Ȩ���б�
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> weights[i];
//	}
//
//	vector<OpenSource> projects;
//	for (int i = 0; i < N; i++)
//	{
//		string	name;	
//		int		watch;	
//		int		star;	
//		int		fork;	
//		int		issue;	
//		int		mr;		
//
//		cin >> name >> watch >> star >> fork >> issue >> mr;
//
//		//projects.push_back(OpenSource(name, watch, star, fork, issue, mr));
//		projects.emplace_back(name, watch, star, fork, issue, mr);  // ֱ��ʹ�ù��캯������������ӵ�������
//	}
//
//	vector<pair<string, int>> result = theHotPro(weights, projects);
//
//	for (auto& p : result)
//	{
//		cout << p.first << endl;
//	}
//
//
//}