#include<iostream>
using namespace std;

// �ܽ᣺��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����

// ֵ����
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01 a = " << a << endl;
//	cout << "swap01 b = " << b << endl;
//}
//
//// ��ַ����
//void swap2(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	cout << "swap02 a = " << *p1 << endl;
//	cout << "swap02 b = " << *p2 << endl;
//}
//
//int main()
//{
//	// ָ��ͺ���
//	int a = 10;
//	int b = 20;
//
//	// 1.ֵ����
//	swap1(a, b);	// ֵ���ݲ���ı�ʵ��
//	
//	// 2.��ַ����
//	swap2(&a, &b);	// ��ַ���ݻ�ı�ʵ��
//	cout << " a = " << a << endl;
//	cout << " b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}