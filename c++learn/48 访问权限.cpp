#include<iostream>
#include<string>
using namespace std;

/*
����Ȩ�������֣�
	public	  ����Ȩ��	��Ա ���ڿ��Է��� ������Է���
	protected ����Ȩ��	��Ա ���ڿ��Է��� ���ⲻ���Է���	���ӿ��Է��ʸ����еı�������
	private	  ˽��Ȩ��	��Ա ���ڿ��Է��� ���ⲻ���Է���	���Ӳ����Է��ʸ����е�˽������
*/

class Person
{
public:
	// ����Ȩ��
	string m_Name;

protected:
	// ����Ȩ��
	string m_Car;

private:
	// ˽��Ȩ��
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};








//int main()
//{
//	// ʵ�����������
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����";  //����Ȩ��������ʲ���
//	//p1.m_Password = 123; //˽��Ȩ��������ʲ���
//
//
//
//
//
//	system("pause");
//
//	return 0;
//}