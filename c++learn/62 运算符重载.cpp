#include<iostream>

using namespace std;

/*��������ظ�������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������*/

//
//class CGirl       // ��Ů��CGirl��
//{
//    friend CGirl& operator+(CGirl& g, int score);
//    friend CGirl& operator+(int score, CGirl& g);
//    friend CGirl& operator+(CGirl& g1, CGirl& g2);
//private:
//    int         m_xw;        // ��Χ��
//    int         m_score;    // ������
//public:
//    string    m_name;   // ������
//
//    // Ĭ�Ϲ��캯����
//    CGirl() { m_name = "��ʩ";  m_xw = 87;  m_score = 30; }
//    // ���ҽ��ܵķ�����
//    void show() { cout << "������" << m_name << "����Χ��" << m_xw << "�����֣�" << m_score << endl; }
//
//    //CGirl& operator-(int score)    // ����Ů���ֵĺ�����
//    //{
//    //    m_score = m_score - score;
//    //    return *this;
//    //}
//};
//
//CGirl& operator+(CGirl& g, int score)    // ����Ů�ӷֵĺ�����
//{
//    g.m_score = g.m_score + score;
//    return g;
//}
//CGirl& operator+(int score, CGirl& g)    // ����Ů�ӷֵĺ�����
//{
//    g.m_score = g.m_score + score;
//    return g;
//}
//CGirl& operator+(CGirl& g1, CGirl& g2)    // ����Ů�ӷֵĺ�����
//{
//    g1.m_score = g1.m_score + g2.m_score;
//    return g1;
//}

//int main()
//{
//    // ���ݵ�Ҫ��ÿ�ֱ���֮�󣬸���Ů�������ĵ÷֡�
//    CGirl g;
//    g = g + g;
//    g.show();
//}