#include<iostream>
using namespace std;

/*
**���ã�**������������ͬ����߸�����

������������������
	1:ͬһ����������
	2:����������ͬ
	3:�����������Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
	ע��: �����ķ���ֵ��������Ϊ�������ص�����
*/

//void func()
//{
//	cout << "func�ĵ���" << endl;
//
//}
//
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//
//}
//
//void func(double a)
//{
//	cout << "func(d a)�ĵ���" << endl;
//
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b)�ĵ���" << endl;
//
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b)�ĵ���" << endl;
//
//}

//int func(double a, int b)
//{
//	cout << "func(double a, int b)�ĵ���" << endl;
//
//}
//��������ע������
//1��������Ϊ��������

void func1(int& a)
{
	cout << "func (int &a) ���� " << endl;
}

void func1(const int& a)
{
	cout << "func (const int &a) ���� " << endl;
}


//2������������������Ĭ�ϲ���

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}
//int main() 
//{
//	//func();
//	//func(10);
//	//func(2.13);
//	//func(10, 3.14)
//	//func(2.3, 10);
//	int a = 10;
//	func1(a);
//	func1(10);
//	//func2(10); //����Ĭ�ϲ����������壬��Ҫ����
//	system("pause");
//	return 0;
//
//}








