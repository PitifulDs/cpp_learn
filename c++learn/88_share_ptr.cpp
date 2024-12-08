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
//    // ���� shared_ptr ����ָ�벢���붯̬����Ķ���
//    std::shared_ptr<myclass> ptr1(new myclass(10));
//    std::shared_ptr<myclass> ptr12(new myclass(11));
//
//    // ʹ������ָ����ʶ���ĳ�Ա����
//    ptr1->printdata();
//
//    // ��������ָ��
//    std::shared_ptr<myclass> ptr2 = ptr1;
//
//    // ʹ������ָ����ʶ���ĳ�Ա����
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
//    // ptr1 �� ptr2 ������ʱ����̬����Ķ���ᱻ�ͷ�
//
//    return 0;
//}
