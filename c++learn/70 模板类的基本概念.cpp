//#include<iostream>
//using namespace std;
//
//template <class T1, class T2=string> //����ʹ��ȱʡ��ָ��
////template <class T1, class T2>
//class AA
//{
//public:
//	T1 m_a; // ͨ���������ڳ�Ա����
//	T2 m_b;	// ͨ���������ڳ�Ա����
//
//	AA(){}	// Ĭ�Ϲ��캯��Ϊ��
//	// ͨ���������ڳ�Ա�����Ĳ���
//	AA(T1 a, T2 b):m_a(a), m_b(b){}
//
//	// ͨ���������ڳ�Ա�����ķ���ֵ
//	T1 geta()
//	{
//		T1 a = 2;		// ͨ���������ڳ�Ա�����Ĵ�����
//		return m_a + a;
//	}
//
//	T2 getb();
//	//{
//	//	//T1 b = 1;		//	ͨ���������ڳ�Ա�����Ĵ�����
//	//	//return m_b + b;
//	//	return m_b;
//
//};
//
//template <class T1, class T2>
//T2 AA<T1, T2>::getb()
//{
//	//T1 b = 1;		//	ͨ���������ڳ�Ա�����Ĵ�����
//	//return m_b + b;
//	return m_b;
//}
//
//
//int main()
//{
//	AA<int, double> a;	// ��ģ����AA��������a
//	//AA<> a;	�����
//	a.m_a = 20; a.m_b = 30;
//	cout << "a.geta()=" << a.geta() << endl;
//	cout << "a.getb()=" << a.getb() << endl;
//
//	AA<int, string> b;
//	b.m_a = 20; b.m_b = "��ʩ";
//	cout << "b.geta()=" << b.geta() << endl;
//	cout << "b.getb()=" << b.getb() << endl;
//
//	// AA����ģ��������������������һ�־�����������ͣ� AA<�������ͣ���������>����������һ�־������������
//	AA<int, string>* c = new AA<int, string>(3, "����");		// ��ģ����AA��������c
//	cout << "c->geta()=" << c->geta() << endl;
//	cout << "c->getb()=" << c->getb() << endl;
//	delete c;
//}