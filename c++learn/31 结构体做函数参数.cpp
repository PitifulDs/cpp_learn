#include<iostream>
#include<string>
using namespace std;

/*
	���ã����ṹ����Ϊ���������д���
	���ݷ�ʽ�����֣�
					ֵ����
					��ַ����
*/
// �ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����

//
// ����student�ṹ��
//typedef struct student 
//{
//	string name;
//	int age;
//	int score;
//}student,*Stu;
//
//// ��ӡ����
//// 1.ֵ����
//void printstudent1(student s)
//{
//	// s.age = 28; ����ı�ֵ
//	cout << "�Ӻ���1�д�ӡ�������� " << s.name <<
//		"���䣺 " << s.age <<
//		"������ " << s.score << endl;
//}
//
//// 2. ��ַ����
//void printstudent2( Stu s)
//{
//	s->age = 28; //��ı�ֵ
//	cout << "�Ӻ���2�д�ӡ��������" << s->name <<
//		"���䣺" << s->age <<
//		"������" << s->score << endl;
//}
//
//int main()
//{
//	// �ṹ������������ 
//	// ��ѧ�����뵽һ�������У���ӡѧ����������Ϣ
//
//	// �����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.score = 85;
//	s.age = 99;
//
//	printstudent1(s);
//	printstudent2(&s);
//	/*cout << "main�����д�ӡ��������" << s.name <<
//		"���䣺" << s.age <<
//		"������" << s.score << endl;*/
//
//	system("pause");
//
//	return 0;
//}