#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

struct Student
{
   	string name; // 姓名
	vector<int> scores;	 // 分数成绩
	int totalScore = 0;	// 总分
};

bool compareTotalScore(const Student& s1, const Student& s2)
{
	if (s1.totalScore == s2.totalScore)
	{
		return s1.name < s2.name;
	}

	return s1.totalScore > s2.totalScore;
}

void compareTotal(vector<Student>& students)
{
	sort(students.begin(), students.end(), compareTotalScore);

}

bool compareSubjectScore(const Student& s1, const Student& s2, int subjectIndex)
{
	if (s1.scores[subjectIndex] == s2.scores[subjectIndex])
	{
		return s1.name < s2.name;
	}
	return s1.scores[subjectIndex] > s2.scores[subjectIndex];
}

void compareSubject(vector<Student>& students, int subjectIndex)
{
	sort(students.begin(), students.end(), [subjectIndex](const Student& s1, const Student& s2) {
			return compareSubjectScore(s1, s2, subjectIndex);
		});

}

//int main()
//{
//	int n, m;	// 人数n，科目m
//	cin >> n >> m;
//	cin.ignore();
//
//	vector<string> subjects(m);	// 科目
//	for (int i = 0; i < m; i++)
//	{
//		cin >> subjects[i];
//	}
//
//	vector<Student> students(n);	// 学生
//	for (int i = 0; i < n; i++)
//	{
//		cin >> students[i].name;
//		students[i].scores.resize(m); //调整数组students[i].scores的大小，使其长度为m。
//		for (int j = 0; j < m; j++)
//		{
//			cin >> students[i].scores[j];
//			students[i].totalScore += students[i].scores[j]; // 计算总分
//		}
//	}
//
//	cin.ignore(); // 忽略前面输入留下的换行符
//	string targetSubject; // 目标科目
//	getline(cin, targetSubject);
//
//	auto it = find(subjects.begin(), subjects.end(), targetSubject); // 查找目标科目
//	vector<string> result;
//	if (it != subjects.end())
//	{
//		int subjectIndex = distance(subjects.begin(), it);
//		compareSubject(students, subjectIndex);
//	}
//	else
//	{
//		compareTotal(students);
//	}
//
//	for (auto& student : students)
//	{
//		cout << student.name << " ";
//	}
//
//}