#include<iostream>
#include<string>
using namespace std;

/*
	���ã�ͨ��ָ����ʽṹ���еĳ�Ա
	���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������
*/

struct student
{
	string name;
	int age;
	int score;
};

//int main()
//{
//	// ��������struct���ǿ���ʡ�Եģ����� 
//	// 1.����ѧ���ṹ�����
//	struct student s = { "����", 18, 99 };
//
//	// 2.ͨ��ָ��ָ��ṹ�����
//	struct student* p = &s;
//
//	// 3.ͨ��ָ����ʽṹ������е�����
//	cout << "������" << p->name <<
//		"���䣺" << p->age <<
//		"������" << p->score << endl;
//
//
//	system("pause");
//
//	return 0;
//}