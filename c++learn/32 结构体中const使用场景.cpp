#include<iostream>
#include<string>
using namespace std;

//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
//// ֵ����
//void printStudents1(student s)
//{
//	cout << "�Ӻ���2�д�ӡ��������" << s.name <<
//			"���䣺" << s.age <<
//			"������" << s.score << endl;
//}
//
//// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//void printStudents2(student *s)
//{ 
//	s->age = 111;
//	cout << "�Ӻ���2�д�ӡ��������" << s->name <<
//		"���䣺" << s->age <<
//		"������" << s->score << endl;
//}
//
//// const ���Է�ֹ�������е������
//void printStudents3(const student* s)
//{
//	// s->age = 111; ����const֮��һ�����޸Ĳ����ͻᱨ����ֹ���������
//	cout << "�Ӻ���2�д�ӡ��������" << s->name <<
//		"���䣺" << s->age <<
//		"������" << s->score << endl;
//}
//
//int main()
//{
//	struct student s = { "����", 15, 70 };
//
//	printStudents1(s);
//	printStudents2(&s);
//	printStudents3(&s);
//
//	system("pause");
//
//	return 0;
//}