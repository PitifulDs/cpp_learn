#include<iostream>
#include<string>
using namespace std;

/*
	作用：将结构体作为参数向函数中传递
	传递方式有两种：
					值传递
					地址传递
*/
// 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递

//
// 定义student结构体
//typedef struct student 
//{
//	string name;
//	int age;
//	int score;
//}student,*Stu;
//
//// 打印函数
//// 1.值传递
//void printstudent1(student s)
//{
//	// s.age = 28; 不会改变值
//	cout << "子函数1中打印：姓名： " << s.name <<
//		"年龄： " << s.age <<
//		"分数： " << s.score << endl;
//}
//
//// 2. 地址传递
//void printstudent2( Stu s)
//{
//	s->age = 28; //会改变值
//	cout << "子函数2中打印：姓名：" << s->name <<
//		"年龄：" << s->age <<
//		"分数：" << s->score << endl;
//}
//
//int main()
//{
//	// 结构体做函数参数 
//	// 将学生传入到一个参数中，打印学生的所有信息
//
//	// 创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.score = 85;
//	s.age = 99;
//
//	printstudent1(s);
//	printstudent2(&s);
//	/*cout << "main函数中打印：姓名：" << s.name <<
//		"年龄：" << s.age <<
//		"分数：" << s.score << endl;*/
//
//	system("pause");
//
//	return 0;
//}