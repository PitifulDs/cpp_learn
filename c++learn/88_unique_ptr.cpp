//#include <iostream>
//#include <memory>
//#include <string>
//class MyClass {
//public:
//    MyClass(int value, const std::string& initStr = "") : data(value), str(initStr) {
//        std::cout << "Constructor called." << std::endl;
//    }
//    ~MyClass() {
//        std::cout << "Destructor called." << std::endl;
//    }
//    void printData() {
//        std::cout << "String: " << str << std::endl; // Ҳ���Դ�ӡstr 
//        std::cout << "Data: " << data << std::endl;
//    }
//private:
//    int data;
//    std::string str;
//};
//
//int main() {
//    // ���� unique_ptr ����ָ�벢���붯̬����Ķ���
//    std::unique_ptr<MyClass> ptr1(new MyClass(10));
//    
//    // ʹ������ָ����ʶ���ĳ�Ա����
//    ptr1->printData();
//
//    // std::unique_ptr<MyClass> ptr3=ptr1; ������
//    std::unique_ptr<MyClass> ptr3(new MyClass(100, "���ѽ"));    //  �����Լ��ٴ���һ������
//    ptr3->printData();
//    // �ƶ����壺ת������Ȩ
//    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
//    ptr2 = std::move(ptr3); // ���ת��
//    // ʹ������ָ����ʶ���ĳ�Ա����
//    ptr2->printData();
//
//    // �� ptr2 ������ʱ����̬����Ķ���ᱻ�ͷ�
//
//    return 0;
//}
