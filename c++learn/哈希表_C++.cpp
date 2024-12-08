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
//	// 哈希函数，将key映射到哈希表的索引
//	int hash(int key) {
//		return key % size;
//	}
//
//public:
//	// 构造函数，初始化哈希表大小为capacity
//	HashTable(int capacity)
//	{
//		size = capacity;
//		table.resize(size);
//	}
//
//	// 向哈希表中插入键值对
//	void insert(int key, const string& value)
//	{
//		int index = hash(key);
//		table[index].push_back(make_pair(key, value));
//	}
//
//	// 查找指定key对应的值
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
//	// 从哈希表中删除指定key的键值对
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




