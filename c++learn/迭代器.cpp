#include <iostream>  
#include <vector>  

//int main() {
//    // 创建一个vector容器并初始化  
//    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
//
//    // 获取指向vector起始位置的迭代器  
//    std::vector<int>::iterator it;
//    it = numbers.begin();
//
//    // 使用迭代器遍历vector中的元素  
//    for (; it != numbers.end(); ++it) {
//        std::cout << *it << " "; // 解引用迭代器，访问元素的值  
//    }
//    std::cout << std::endl;
//
//    // 使用基于范围的for循环遍历vector（这是C++11引入的新特性）  
//    for (const auto& num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    // 修改vector中的元素  
//    it = numbers.begin();
//    std::advance(it, 3); // 将迭代器向前移动3个位置  
//    *it = 10; // 修改第4个元素为10  
//
//    // 再次遍历并打印vector中的元素  
//    for (const auto& num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}