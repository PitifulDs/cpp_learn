//#include <iostream>
//#include <memory>
//
//class myclass {
//public:
//    myclass(int value) : data(value) {
//        std::cout << "constructor called." << std::endl;
//    }
//    ~myclass() {
//        std::cout << "destructor called." << std::endl;
//    }
//    void printdata() {
//        std::cout << "data: " << data << std::endl;
//    }
//private:
//    int data;
//};
//
//int main() {
//    // 创建 shared_ptr 智能指针并传入动态分配的对象
//    std::shared_ptr<myclass> ptr1(new myclass(10));
//    std::shared_ptr<myclass> ptr12(new myclass(11));
//
//    // 使用智能指针访问对象的成员函数
//    ptr1->printdata();
//
//    // 复制智能指针
//    std::shared_ptr<myclass> ptr2 = ptr1;
//
//    // 使用智能指针访问对象的成员函数
//    ptr2->printdata();
//
//    std::shared_ptr<myclass> ptr3 = ptr2;
//    ptr3->printdata();
//    std::shared_ptr<myclass> ptr4 = ptr3;
//    //ptr4->printdata();
//    std::shared_ptr<myclass> ptr5 = ptr4;
//    ptr5->printdata();
//    std::shared_ptr<myclass> ptr6 = ptr5;
//    ptr6->printdata();
//    std::shared_ptr<myclass> ptr7 = ptr6;
//    ptr7->printdata();
//
//    std::shared_ptr<myclass> ptr8 = ptr12;
//    ptr8->printdata();
//    std::shared_ptr<myclass> ptr9 = ptr12;
//    ptr9->printdata();
//    std::shared_ptr<myclass> ptr10 = ptr12;
//    ptr10->printdata();
//    std::shared_ptr<myclass> ptr11 = ptr12;
//    ptr11->printdata();
//    // ptr1 和 ptr2 被销毁时，动态分配的对象会被释放
//
//    return 0;
//}
