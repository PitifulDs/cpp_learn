#include<iostream>
#include<string>
using namespace std;
/*
	结构体基本概念:结构体属于用户自定义的数据类型，一些类型几何组成的一个类型,
	              允许用户存储不同的数据类型。
	
	结构体定义和使用
			语法：struct 结构体名 { 结构体成员列表 }；

	通过结构体创建变量的方式有三种：
			1.struct 结构体名 变量名
			2.struct 结构体名 变量名 = { 成员1值 ， 成员2值…}
			3.定义结构体时顺便创建变量
*/

/*
	总结1：定义结构体时的关键字是struct，不可省略
	总结2：创建结构体变量时，关键字struct可以省略
	总结3：结构体变量利用操作符 ‘’.’’ 访问成员
*/


// 1.创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student
{
	/* 成员列表 */

	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	float score;

}s3; // s3 只有第三种才需要写在这里

// 2.通过学生类型创建具体学生
//
///* 
//	2.1 struct Student s1
//	2.2 struct Student s2 = { ... }
//	2.3 在定义结构体时顺便创建结构体变量
//*/
//
//int main()
//{
//	// 2.1 struct Student s1
//	struct Student s1;	// struct关键字在这里可以省略
//	// 给s1属性赋值，通过访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 18.90;
//
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
//
//	// 2.2 struct Student s2 = { ... }
//	struct Student s2 = { "李四", 29, 80.2 };
//	
//	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
//
//	// 2.3 在定义结构体时顺便创建结构体变量
//	s3.name = "王五";
//	s3.age = 18;
//	s3.score = 80;
//
//	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
//	system("pause");
//
//	return 0;
//}