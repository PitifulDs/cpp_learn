#include<iostream>
#include<string>
using namespace std;

/*
	�������������һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�
			 ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

		����Ӣ����Ϣ���£�
						{"����",23,"��"},
						{"����",22,"��"},
						{"�ŷ�",20,"��"},
						{"����",21,"��"},
						{"����",19,"Ů"},
*/

// 1.���Ӣ�۽ṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};

// ð������ ʵ��������������
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

// ��ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i=0;i<len;i++)
	{
		cout << "������ " << heroArray[i].name << " �Ա� " << heroArray[i].sex << " ���䣺 " << heroArray[i].age << endl;
	}
}


//int main()
//{
//	// 2.����������5��Ӣ��
//	struct Hero heroArray[5] =
//	{
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//
//	// 3.������������򣬰������������������
//	bubbleSort(heroArray, len);
//
//	// 4.�����������ӡ���
//	printHero(heroArray, len);
//
//
//	system("pause");
//
//	return 0;
//}