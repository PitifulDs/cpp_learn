//#include <iostream>         // ����ͷ�ļ���
//using namespace std;        // ָ��ȱʡ�������ռ䡣
//
//
//template<typename  T1, typename T2>
//auto func(T1 x, T2 y) -> decltype(x+y)
//{
//
//	//auto tmp = x + y;
//	decltype(x + y) tmp = x + y;
//	cout << "tmp=" << tmp << endl;
//	return tmp;
//}
//
//int func()
//{
//	cout << "������func()������\n";
//	return 3;
//}
//
////�﷨��decltype(expression) var;
////1�����expression��һ��û���������������ı�ʶ������var��������ñ�ʶ����������ͬ������const���޶�����
////2�����expression��һ���������ã���var�������뺯���ķ���ֵ������ͬ���������ܷ���void�������Է���void * ����
////3�����expression��һ����ֵ����ȡ��ַ��(Ҫ�ų���һ�����)�������������������ı�ʶ������ôvar��������expression�����á�
////4���������������������㣬��var��������expression��������ͬ��
//
//int main()
//{
//	short a = 5.5;
//	char b = 3;
//	//auto tmp = a + b;
//	func(a, b);
//	func(3, 5.8);
//	//short a1 = 5;
//	//short b1 = 10;
//
//	//short& ra = a1;
//	////decltype(ra) da = b1;
//	//decltype(func) *da = func;
//	//da();
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
