#include <iostream>  
#include <vector>  

//int main() {
//    // ����һ��vector��������ʼ��  
//    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
//
//    // ��ȡָ��vector��ʼλ�õĵ�����  
//    std::vector<int>::iterator it;
//    it = numbers.begin();
//
//    // ʹ�õ���������vector�е�Ԫ��  
//    for (; it != numbers.end(); ++it) {
//        std::cout << *it << " "; // �����õ�����������Ԫ�ص�ֵ  
//    }
//    std::cout << std::endl;
//
//    // ʹ�û��ڷ�Χ��forѭ������vector������C++11����������ԣ�  
//    for (const auto& num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    // �޸�vector�е�Ԫ��  
//    it = numbers.begin();
//    std::advance(it, 3); // ����������ǰ�ƶ�3��λ��  
//    *it = 10; // �޸ĵ�4��Ԫ��Ϊ10  
//
//    // �ٴα�������ӡvector�е�Ԫ��  
//    for (const auto& num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}