#include<iostream>
using namespace std;

/*
	���ã������ǿ�����Ϊ�����ķ���ֵ���ڵ�

	ע�⣺��Ҫ���ؾֲ���������

	�÷�������������Ϊ��ֵ
*/

//���ؾֲ���������
int& test01()
{
	int a = 10;	// �ֲ���������������е�ջ��
	return a;
}

//���ؾ�̬��������
int& test02() {
	static int a = 20;	// ��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}
//
//int main()
//{
//	int &ref = test01();
//
//	cout << "ref=" << ref << endl;	// ��һ�ν����ȷ����Ϊ���������˱���
//	cout << "ref=" << ref << endl;	// �ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�
//
//	int& ref2 = test02();
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	test02() = 1000;				//	��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	system("pause");
//
//	return 0;
//}