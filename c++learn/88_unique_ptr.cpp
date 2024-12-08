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
//        std::cout << "String: " << str << std::endl; // 也可以打印str 
//        std::cout << "Data: " << data << std::endl;
//    }
//private:
//    int data;
//    std::string str;
//};
//
//int main() {
//    // 创建 unique_ptr 智能指针并传入动态分配的对象
//    std::unique_ptr<MyClass> ptr1(new MyClass(10));
//    
//    // 使用智能指针访问对象的成员函数
//    ptr1->printData();
//
//    // std::unique_ptr<MyClass> ptr3=ptr1; 不可以
//    std::unique_ptr<MyClass> ptr3(new MyClass(100, "你好呀"));    //  可以自己再创建一个对象
//    ptr3->printData();
//    // 移动语义：转移所有权
//    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
//    ptr2 = std::move(ptr3); // 多次转移
//    // 使用智能指针访问对象的成员函数
//    ptr2->printData();
//
//    // 当 ptr2 被销毁时，动态分配的对象会被释放
//
//    return 0;
//}
