#include<iostream>
using namespace std;

//
//
//class CGirl       // ��Ů��CGirl��
//{
//public:
//	int        m_bh;               // ��š�
//	int        m_xw;               // ��Χ��
//	static char*	   m_pool;			   // �ڴ����ʼ��ַ
//
//	static bool initpool()
//	{
//		m_pool = (char*)malloc(18);
//		if (m_pool == 0) return false;
//		memset(m_pool, 0, 18);
//		cout << "�ڴ�ص���ʼ��ַ�ǣ�" << (void*)m_pool << endl;
//		return true;
// 	}
//
//	static void freepool()		// �ͷ��ڴ��
//	{
//		if (m_pool == 0) return;                  // ����ڴ��Ϊ�գ�����Ҫ�ͷţ�ֱ�ӷ��ء�
//		free(m_pool);                                        // ���ڴ�ع黹��ϵͳ��
//		cout << "�ڴ�����ͷš�\n";
//
//	}
//
//
//
//	CGirl(int bh, int xw) { m_bh = bh, m_xw = xw;  cout << "�����˹��캯��CGirl()\n"; }
//	~CGirl() { cout << "��������������~CGirl()\n"; }
//
//	void* operator new(size_t size)   // ����������size_t��unsigned long long��������ֵ������void*��
//	{
//
//		if (m_pool[0] == 0)      // �жϵ�һ��λ���Ƿ���С�
//		{
//			cout << "�����˵�һ���ڴ棺" << (void*)(m_pool + 1) << endl;
//			m_pool[0] = 1;         // �ѵ�һ��λ�ñ��Ϊ�ѷ��䡣
//			return m_pool + 1;  // ���ص�һ�����ڴ�Ŷ����ַ��
//		}
//
//		if (m_pool[9] == 0)          // �жϵڶ���λ���Ƿ���С�
//		{
//			cout << "�����˵ڶ����ڴ棺" << (void*)(m_pool + 9) << endl;
//			m_pool[9] = 1;             // �ѵڶ���λ�ñ��Ϊ�ѷ��䡣
//			return m_pool + 9;      // ���صڶ������ڴ�Ŷ����ַ��
//		}
//
//		// �����������λ�ö������ã��Ǿ�ֱ��ϵͳ�����ڴ档
//		void* ptr = malloc(size);        // �����ڴ档
//		cout << "���뵽���ڴ�ĵ�ַ�ǣ�" << ptr << endl;
//		return ptr;
//	}
//
//	void operator delete(void* ptr)   // ����������void *������ֵ������void��
//	{
//		if (ptr == 0) return;      // ����������ĵ�ַΪ�գ�ֱ�ӷ��ء�
//
//		if (ptr == m_pool + 1)      // ����������ĵ�ַ���ڴ�صĵ�һ��λ�á�
//		{
//			cout << "�ͷ��˵�һ���ڴ档\n";
//			m_pool[0] = 0;              // �ѵ�һ��λ�ñ��Ϊ���С�
//			return;
//		}
//
//		if (ptr == m_pool + 9)      // ����������ĵ�ַ���ڴ�صĵڶ���λ�á�
//		{
//			cout << "�ͷ��˵ڶ����ڴ档\n";
//			m_pool[9] = 0;              // �ѵڶ���λ�ñ��Ϊ���С�
//			return;
//		}
//
//		// ����������ĵ�ַ�������ڴ�أ������黹��ϵͳ��
//		free(ptr);      // �ͷ��ڴ档
//	}
//};
//	
//
//char* CGirl::m_pool = 0;       // ��ʼ���ڴ�ص�ָ�롣\
//
//int main()
//{
//	// ��ʼ���ڴ�ء�
//	if (CGirl::initpool() == false) { cout << "��ʼ���ڴ��ʧ�ܡ�\n"; return -1; }
//
//	CGirl* p1 = new CGirl(3, 8);       // ��ʹ���ڴ�صĵ�һ��λ�á�
//	cout << "p1�ĵ�ַ�ǣ�" << p1 << "����ţ�" << p1->m_bh << "����Χ��" << p1->m_xw << endl;
//
//	CGirl* p2 = new CGirl(4, 7);       // ��ʹ���ڴ�صĵڶ���λ�á�
//	cout << "p2�ĵ�ַ�ǣ�" << p2 << "����ţ�" << p2->m_bh << "����Χ��" << p2->m_xw << endl;
//
//	CGirl* p3 = new CGirl(6, 9);       // ��ʹ��ϵͳ���ڴ档
//	cout << "p3�ĵ�ַ�ǣ�" << p3 << "����ţ�" << p3->m_bh << "����Χ��" << p3->m_xw << endl;
//
//	delete p1;    // ���ͷ��ڴ�صĵ�һ��λ�á�
//
//	CGirl* p4 = new CGirl(5, 3);        // ��ʹ���ڴ�صĵ�һ��λ�á�
//	cout << "p4�ĵ�ַ�ǣ�" << p4 << "����ţ�" << p4->m_bh << "����Χ��" << p4->m_xw << endl;
//
//	delete p2;    // ���ͷ��ڴ�صĵڶ���λ�á�
//	delete p3;    // ���ͷ�ϵͳ���ڴ档
//	delete p4;    // ���ͷ��ڴ�صĵ�һ��λ�á�
//
//	CGirl::freepool();     // �ͷ��ڴ�ء�
//
//
//}



















