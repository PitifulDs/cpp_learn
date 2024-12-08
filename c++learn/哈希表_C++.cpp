#include<iostream>
#include<vector>
#include<list>

using namespace std;
//
//class HashTable {
//private:
//	vector<list<pair<int, string>>> table;
//	int size;
//
//	// ��ϣ��������keyӳ�䵽��ϣ�������
//	int hash(int key) {
//		return key % size;
//	}
//
//public:
//	// ���캯������ʼ����ϣ���СΪcapacity
//	HashTable(int capacity)
//	{
//		size = capacity;
//		table.resize(size);
//	}
//
//	// ���ϣ���в����ֵ��
//	void insert(int key, const string& value)
//	{
//		int index = hash(key);
//		table[index].push_back(make_pair(key, value));
//	}
//
//	// ����ָ��key��Ӧ��ֵ
//	string search(int key)
//	{
//		int index = hash(key);
//		for (const auto& pair : table[index])
//		{
//			if (pair.first == key) {
//				return pair.second;
//			}
//		}
//		return "key not found";
//	}
//
//	// �ӹ�ϣ����ɾ��ָ��key�ļ�ֵ��
//	void remove(int  key)
//	{
//		int index = hash(key);
//		auto& bucket = table[index];
//		for (auto it = bucket.begin(); it != bucket.end(); it++)
//		{
//			if (it->first == key)
//			{
//				bucket.erase(it);
//				return;
//			}
//		}
//	}
//
//};
//
//int main()
//{
//	HashTable ht(1000);
//
//	ht.insert(10, "Alice");
//	ht.insert(20, "Bob");
//	ht.insert(30, "Charlie");
//
//	cout << "Value for key 20: " << ht.search(20) << endl;
//	cout << "Value for key 1: " << ht.search(1) << endl;
//	ht.remove(20);
//
//	cout << "Value for key 20 after removal: " << ht.search(20) << endl;
//
//	return 0;
//
//}




