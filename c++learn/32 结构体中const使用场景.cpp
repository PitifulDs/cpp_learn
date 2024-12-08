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
//// 值传递
//void printStudents1(student s)
//{
//	cout << "子函数2中打印：姓名：" << s.name <<
//			"年龄：" << s.age <<
//			"分数：" << s.score << endl;
//}
//
//// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//void printStudents2(student *s)
//{ 
//	s->age = 111;
//	cout << "子函数2中打印：姓名：" << s->name <<
//		"年龄：" << s->age <<
//		"分数：" << s->score << endl;
//}
//
//// const 可以防止函数体中的误操作
//void printStudents3(const student* s)
//{
//	// s->age = 111; 加入const之后，一旦有修改操作就会报错，防止我们误操作
//	cout << "子函数2中打印：姓名：" << s->name <<
//		"年龄：" << s->age <<
//		"分数：" << s->score << endl;
//}
//
//int main()
//{
//	struct student s = { "张三", 15, 70 };
//
//	printStudents1(s);
//	printStudents2(&s);
//	printStudents3(&s);
//
//	system("pause");
//
//	return 0;
//}