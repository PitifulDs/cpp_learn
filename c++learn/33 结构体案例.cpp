#include<iostream>
#include<string>
#include<ctime>
using namespace std;

/*
案例描述：
	学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

	设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

	学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

	最终打印出老师数据以及老师所带的学生数据。
*/

// 学生结构体
struct Student
{
	string sName;	// 姓名
	int score;		// 分数
};

// 老师结构体定义
struct Teacher
{
	string tName;	// 姓名
	struct Student sArray[5];	// 学生数组
};

// 给老师和学生赋值的函数
void allocateSapce(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	// 给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		// 通过循环给每名老师所带学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40; // 40-100
			tArray[i].sArray[j].score = random;
		}
	}
}

// 打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名"<<tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << 
				" 分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}


//
//int main()
//{
//	// 随机数种子
//	srand((unsigned int)time(NULL));
//
//
//	// 1. 创建3名老师的数组
//	struct Teacher tArray[3];
//
//	// 2.通过函数给3名老师的信息赋值， 并给老师带的学生信息赋值
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSapce(tArray, len);
//
//	// 3.打印所有老师及所带学生的信息
//	printInfo(tArray, len);
//
//	system("pause");
//
//	return 0;
//}