#include<iostream>

using namespace std;

/*运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型*/

//
//class CGirl       // 超女类CGirl。
//{
//    friend CGirl& operator+(CGirl& g, int score);
//    friend CGirl& operator+(int score, CGirl& g);
//    friend CGirl& operator+(CGirl& g1, CGirl& g2);
//private:
//    int         m_xw;        // 胸围。
//    int         m_score;    // 分数。
//public:
//    string    m_name;   // 姓名。
//
//    // 默认构造函数。
//    CGirl() { m_name = "西施";  m_xw = 87;  m_score = 30; }
//    // 自我介绍的方法。
//    void show() { cout << "姓名：" << m_name << "，胸围：" << m_xw << "，评分：" << m_score << endl; }
//
//    //CGirl& operator-(int score)    // 给超女减分的函数。
//    //{
//    //    m_score = m_score - score;
//    //    return *this;
//    //}
//};
//
//CGirl& operator+(CGirl& g, int score)    // 给超女加分的函数。
//{
//    g.m_score = g.m_score + score;
//    return g;
//}
//CGirl& operator+(int score, CGirl& g)    // 给超女加分的函数。
//{
//    g.m_score = g.m_score + score;
//    return g;
//}
//CGirl& operator+(CGirl& g1, CGirl& g2)    // 给超女加分的函数。
//{
//    g1.m_score = g1.m_score + g2.m_score;
//    return g1;
//}

//int main()
//{
//    // 导演的要求：每轮表演之后，给超女加上她的得分。
//    CGirl g;
//    g = g + g;
//    g.show();
//}