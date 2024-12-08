#include<iostream>
using namespace std;

class Cube
{
public:
	// 行为
	// 设置长
	void setL(int l)
	{
		m_L = 1;
	}
	// 获取长
	int getL()
	{
		return m_L;
	}
	// 设置宽
	void setW(int w)
	{
		m_W = w;
	}
	// 获取宽
	int getW()
	{
		return m_W;
	}
	// 设置高
	void setH(int h)
	{
		m_H = h;
	}
	// 获取高
	int getH()
	{
		return m_H;
	}


	// 获取立方体面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}

	// 获取立方体体积
	int calculateV()
	{
		return m_L * m_H * m_W;
	}

private:
	// 属性
	int m_L;
	int m_W;
	int m_H;


};

//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//}


//int main()
//{
//	// 创建立方体对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	cout << "c1面积：" << c1.calculateS() << endl;
//	cout << "c1体积：" << c1.calculateV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1=c2" << endl;
//	}
//	system("pause");
//
//	return 0;
//}