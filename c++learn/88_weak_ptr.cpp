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
//    // 使用 std::shared_ptr 初始化对象
//    // std::shared_ptr<MyClass> sharedPtr = std::make_shared<MyClass>(10, 20);
//    std::shared_ptr<MyClass> sharedPtr(new MyClass(10, 20)); 
//    // 使用 std::weak_ptr 获取对象的观察者
//    std::weak_ptr<MyClass> weakPtr = sharedPtr;
//
//    // 使用 lock() 方法获取 std::shared_ptr，然后调用新的成员函数
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
