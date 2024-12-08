//#include <iostream>
//#include <memory>
//
//class B;
//
//class A {
//public:
//    A() { std::cout << "A constructor called." << std::endl; }
//    ~A() { std::cout << "A destructor called." << std::endl; }
//
//    void setB(std::shared_ptr<B> b) {
//        bPtr = b;
//    }
//
//    void doSomething() {
//        std::cout << "A is doing something." << std::endl;
//    }
//
//private:
//    std::shared_ptr<B> bPtr;
//};
//
//class B {
//public:
//    B() { std::cout << "B constructor called." << std::endl; }
//    ~B() { std::cout << "B destructor called." << std::endl; }
//
//    void setA(std::shared_ptr<A> a) {
//        aPtr = a;
//    }
//
//    void doSomething() {
//        std::cout << "B is doing something." << std::endl;
//    }
//
//private:
//    std::shared_ptr<A> aPtr;
//};
//
//int main() {
//    {
//        std::shared_ptr<A> aPtr = std::make_shared<A>();
//        std::shared_ptr<B> bPtr = std::make_shared<B>();
//
//        // 设置循环引用
//        aPtr->setB(bPtr);
//        bPtr->setA(aPtr);
//    }
//
//    std::cout << "Program ended." << std::endl;
//
//    return 0;
//}
