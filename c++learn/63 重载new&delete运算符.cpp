#include<iostream>
using namespace std;

//void* operator new(size_t size)  // ����������size_t��unsigned long long��������ֵ������void*��
//{
//	cout << "������ȫ�����ص�new��" << size << "�ֽڡ�\n";
//	void* ptr = malloc(size);        // �����ڴ档
//	cout << "���뵽���ڴ�ĵ�ַ�ǣ�" << ptr << endl;
//	return ptr;
//}
//
//void operator delete(void* ptr)   // ����������void *������ֵ������void��
//{
//	cout << "������ȫ�����ص�delete��\n";
//	if (ptr == 0) return;       // �Կ�ָ��delete�ǰ�ȫ�ġ�
//	free(ptr);      // �ͷ��ڴ档
//}
//
//class CGirl       // ��Ů��CGirl��
//{
//public:
//	int        m_bh;               // ��š�
//	int        m_xw;               // ��Χ��
//
//	CGirl(int bh, int xw) { m_bh = bh, m_xw = xw;  cout << "�����˹��캯��CGirl()\n"; }
//	~CGirl() { cout << "��������������~CGirl()\n"; }
//	void* operator new(size_t size)   // ����������size_t��unsigned long long��������ֵ������void*��
//	{
//		cout << "������������ص�new��" << size << "�ֽڡ�\n";
//		void* ptr = malloc(size);        // �����ڴ档
//		cout << "���뵽���ڴ�ĵ�ַ�ǣ�" << ptr << endl;
//		return ptr;
//	}
//
//	void operator delete(void* ptr)   // ����������void *������ֵ������void��
//	{
//		cout << "������������ص�delete��\n";
//		if (ptr == 0) return;       // �Կ�ָ��delete�ǰ�ȫ�ġ�
//		free(ptr);      // �ͷ��ڴ档
//	}
//};
//
//int main()
//{
//	/*int* p1 = new int(3);
//	cout << "p1=" << (void*)p1 << "��*p1=" << *p1 << endl;
//	delete p1;*/
//
//	CGirl* p2 = new CGirl(3, 8);
//	cout << "p2�ĵ�ַ�ǣ�" << p2 << "��ţ�" << p2->m_bh << "����Χ��" << p2->m_xw << endl;
//	delete p2;
//}
//
