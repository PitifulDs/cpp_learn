#include<iostream>
#include<string>
using namespace std;
//
///*
//	作用：结构体中的成员可以是另一个结构体
//
//	例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
//*/
//
////定义学生的结构体
//struct student 
//{
//	string name;
//	int age;
//	int score;
//};
//
//// 定义老师结构体
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct student stu; // 辅导的学生
//};
//
//int main()
//{
//	// 结构体嵌套结构体
//	// 创建老师
//	teacher t;
//	t.id = 1000;
//	t.name = "老王";
//	t.age = 40;
//	t.stu.name = "小李";
//	t.stu.age = 20;
//	t.stu.score = 99;
//
//	cout<<"老师姓名:"<< t.name <<
//		"老师编号:"<< t.id <<
//		" 年龄：" << t.age << 
//		"辅导学员 姓名：" << t.stu.name << 
//		" 年龄：" << t.stu.age << 
//		" 考试分数：" << t.stu.score << endl;
//
//	system("pause");
//
//	return 0;
//}