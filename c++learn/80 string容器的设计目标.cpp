//#include <iostream>
//#include <string>
//using namespace std;
//
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	char cc[8];   // ��ջ�Ϸ���8�ֽڵ��ڴ�ռ䡣
//
//	// ��cc���ڴ�ռ������ַ�����
//	strcpy(cc, "hello");
//	cout << "cc=" << cc << endl << endl;
//
//	// ��cc���ڴ�ռ�����int��������
//	int* a, * b;
//	a = (int*)cc;          // ǰ4���ֽڵĿռ���������a��
//	b = (int*)cc + 4;   // ��4���ֽڵĿռ���������b��
//	*a = 12345;
//	*b = 54321;
//	cout << "*a=" << *a << endl;
//	cout << "*b=" << *b << endl << endl;
//
//	// ��cc���ڴ�ռ�����double��
//	double* d = (double*)cc;
//	*d = 12345.7;
//	cout << "*d=" << *d << endl << endl;
//
//	// ��cc���ڴ�ռ����ڽṹ�塣
//	struct stt
//	{
//		int a;
//		char b[4];
//	}*st;
//	st = (struct stt*)cc;
//	st->a = 38;
//	strcpy(st->b, "abc");
//	cout << "st->a=" << st->a << endl;
//	cout << "st->b=" << st->b << endl << endl;
//
//	// void* malloc(size_t size);
//	//char* cc1 = (char*)malloc(8);
//	//int* cc1 = (int*)malloc(8);
//}






//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//using  namespace std;
//
//int main()
//{
//    struct st_girl {   // ��Ů�ṹ�塣
//        int    bh;
//        char name[30];
//        bool yz;
//        double weight;
//        string memo;
//    } girl;
//
//    cout << "��Ů�ṹ��Ĵ�С��" << sizeof(struct st_girl) << endl;
//
//    string buffer;  // ����һ���յ�string����buffer��
//
//    // ����10����Ů����Ϣ������buffer�С�
//    for (int ii = 1; ii <= 10; ii++)
//    {
//        // �Գ�Ů�ṹ���Ա��ֵ��    
//        memset(&girl, 0, sizeof(struct st_girl));
//        girl.bh = ii;
//        sprintf(girl.name, "��ʩ%02d", ii);
//        girl.yz = true;
//        girl.weight = 48.5 + ii;
//        girl.memo = "�й���ʷ��һ��Ů��";
//
//        // �ѳ�Ů�ṹ׷�ӵ�buffer�С�
//        buffer.append((char*)&girl, sizeof(struct st_girl));
//    }
//
//    cout << "buffer.capacity()=" << buffer.capacity() << endl;  // ��ʾ������
//    cout << "buffer.size()=" << buffer.size() << endl;  // ��ʾʵ�ʴ�С��
//
//    // ��һ��ѭ������buffer������ȫ��������ȡ������
//    for (int ii = 0; ii < buffer.size() / sizeof(struct st_girl); ii++)
//    {
//        memset(&girl, 0, sizeof(struct st_girl));  // ��ʼ����Ů�ṹ�塣
//
//        // �������е����ݸ��Ƶ���Ů�ṹ�塣
//        memcpy(&girl, buffer.data() + ii * sizeof(struct st_girl), sizeof(struct st_girl));
//        // buffer.copy((char*)&girl, sizeof(struct st_girl), ii * sizeof(struct st_girl));
//
//        // ��ʾ��Ů�ṹ���Ա��ֵ��
//        cout << "bh=" << girl.bh << ",name=" << girl.name << ",yz=" << girl.yz << ",weight="
//            << girl.weight << ",memo=" << girl.memo << endl;
//    }
//}
//
//






























