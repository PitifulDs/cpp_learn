//#include <iostream>
//#include <string>
//using namespace std;
//
//#define _CRT_SECURE_NO_WARNINGS
//
//int main()
//{
//	char cc[8];   // 在栈上分配8字节的内存空间。
//
//	// 把cc的内存空间用于字符串。
//	strcpy(cc, "hello");
//	cout << "cc=" << cc << endl << endl;
//
//	// 把cc的内存空间用于int型整数。
//	int* a, * b;
//	a = (int*)cc;          // 前4个字节的空间用于整数a。
//	b = (int*)cc + 4;   // 后4个字节的空间用于整数b。
//	*a = 12345;
//	*b = 54321;
//	cout << "*a=" << *a << endl;
//	cout << "*b=" << *b << endl << endl;
//
//	// 把cc的内存空间用于double。
//	double* d = (double*)cc;
//	*d = 12345.7;
//	cout << "*d=" << *d << endl << endl;
//
//	// 把cc的内存空间用于结构体。
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
//    struct st_girl {   // 超女结构体。
//        int    bh;
//        char name[30];
//        bool yz;
//        double weight;
//        string memo;
//    } girl;
//
//    cout << "超女结构体的大小：" << sizeof(struct st_girl) << endl;
//
//    string buffer;  // 创建一个空的string容器buffer。
//
//    // 生成10名超女的信息，存入buffer中。
//    for (int ii = 1; ii <= 10; ii++)
//    {
//        // 对超女结构体成员赋值。    
//        memset(&girl, 0, sizeof(struct st_girl));
//        girl.bh = ii;
//        sprintf(girl.name, "西施%02d", ii);
//        girl.yz = true;
//        girl.weight = 48.5 + ii;
//        girl.memo = "中国历史第一美女。";
//
//        // 把超女结构追加到buffer中。
//        buffer.append((char*)&girl, sizeof(struct st_girl));
//    }
//
//    cout << "buffer.capacity()=" << buffer.capacity() << endl;  // 显示容量。
//    cout << "buffer.size()=" << buffer.size() << endl;  // 显示实际大小。
//
//    // 用一个循环，把buffer容器中全部的数据取出来。
//    for (int ii = 0; ii < buffer.size() / sizeof(struct st_girl); ii++)
//    {
//        memset(&girl, 0, sizeof(struct st_girl));  // 初始化超女结构体。
//
//        // 把容器中的数据复制到超女结构体。
//        memcpy(&girl, buffer.data() + ii * sizeof(struct st_girl), sizeof(struct st_girl));
//        // buffer.copy((char*)&girl, sizeof(struct st_girl), ii * sizeof(struct st_girl));
//
//        // 显示超女结构体成员的值。
//        cout << "bh=" << girl.bh << ",name=" << girl.name << ",yz=" << girl.yz << ",weight="
//            << girl.weight << ",memo=" << girl.memo << endl;
//    }
//}
//
//






























