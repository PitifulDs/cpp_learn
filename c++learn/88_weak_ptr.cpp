//#include <iostream>
//#include <memory>
//
//class MyClass {
//public:
//    MyClass(int value, int additional) : data(value), additionalData(additional) {
//        std::cout << "Constructor called." << std::endl;
//    }
//    ~MyClass() {
//        std::cout << "Destructor called." << std::endl;
//    }
//    void printData() {
//        std::cout << "Data: " << data << std::endl;
//    }
//    void printAdditionalData() {
//        std::cout << "Additional Data: " << additionalData << std::endl;
//    }
//private:
//    int data;
//    int additionalData;
//};
//
//int main() {
//    // ʹ�� std::shared_ptr ��ʼ������
//    // std::shared_ptr<MyClass> sharedPtr = std::make_shared<MyClass>(10, 20);
//    std::shared_ptr<MyClass> sharedPtr(new MyClass(10, 20)); 
//    // ʹ�� std::weak_ptr ��ȡ����Ĺ۲���
//    std::weak_ptr<MyClass> weakPtr = sharedPtr;
//
//    // ʹ�� lock() ������ȡ std::shared_ptr��Ȼ������µĳ�Ա����
//    if (auto ptr = weakPtr.lock()) {
//        ptr->printData();
//        ptr->printAdditionalData();
//    }
//    else {
//        std::cout << "sharedPtr is expired." << std::endl;
//    }
//
//    return 0;
//}
