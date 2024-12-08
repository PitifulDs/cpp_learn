#include<iostream>
#include<string>
using namespace std;

/*
	封装的意义：		将属性和行为作为一个整体，表现生活中的事物
					将属性和行为加以权限控制封装意义一：
*/

/*
	​封装意义一：     在设计类的时候，属性和行为写在一起，表现事物

	语法：			class 类名{ 访问权限： 属性 / 行为 };

	** 示例1：**设计一个圆类，求圆的周长
*/
//圆周率
//const double PI = 3.14;
//class Circle
//{
//	// 访问权限
//	// 公共权限
//public:
//
//	// 属性
//	int m_r; // 半径
//
//	// 行为
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//
//
//};
//
//// 练习：学生类
//// **示例2：** 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
//class Student
//{
//
//public:
//
//	// 类中的属性和行为 我们统一称为 成员
//	// 属性  成员属性 成员变量
//	// 行为  成员函数 成员方法
//
//	// 属性
//	string m_Name;
//	int m_Id;
//
//	// 行为
//	// 显示姓名和学号
//	void showStudent()
//	{
//		cout << "姓名: " << m_Name << "学号： " << m_Id << endl;
//
//	}
//
//	// 给姓名赋值
//	void setName(string name) {
//		m_Name = name;
//	}
//
//	void setId(int id) {
//		m_Id = id;
//	}
//};
//
//
//
//
//
//
//int main()
//{
//	//// 通过园类 创建具体的圆（对象）
//	//// 实例化 （通过一个类 创建一个对象的过程）
//	//Circle c1;
//	//// 给园对象 的属性进行赋值
//	//c1.m_r = 10;
//
//	//cout << "圆的周长为：" << c1.calculateZC() << endl;
//
//	// 创建一个具体学生 实例化对象
//	Student s1;
//	// 给s1对象 进行属性赋值操作
//	// s1.m_Name = "zs";
//	s1.setName("张三");
//	// s1.m_Id = 1;
//	s1.setId(250);
//	s1.showStudent();
//
//	system("pause");
//
//	return 0;
//}