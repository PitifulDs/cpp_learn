#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
//
//#define TABLE_SIZE 100
//
//// ��ϣ��ڵ�
//struct Node {
//	int key;
//	char* value;
//	struct Node* next;
//};
//
//// ��ϣ��ṹ
//struct HashTable {
//	struct Node* table[TABLE_SIZE];
//};
//
//// ��ϣ����
//int hash(int key)
//{
//	return key % TABLE_SIZE;
//}
//
//// �����½ڵ�
//struct Node* createNode(int key, const char* value) {
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->key = key;
//	newNode->value = _strdup(value);
//	newNode->next = NULL;
//	return newNode;
//}
//
//// �����ֵ��
//void insert(struct HashTable *hashTable, int key, const char* value) {
//	int index = hash(key);
//	struct Node* newNode = createNode(key, value);
//	if (hashTable->table[index] == NULL) {
//		hashTable->table[index] = newNode;
//	}
//	else {
//		struct Node* current = hashTable->table[index];
//		while (current->next != NULL)
//		{
//			current = current->next;
//		}
//		current->next = newNode;
//	}
//
//}
//
//// ����ָ������Ӧ��λ��
//const char* search(struct HashTable* hashTable, int key) {
//	int index = hash(key);
//	struct Node* current = hashTable->table[index];
//	while (current != NULL)
//	{
//		if(current->key == key)
//		{
//			return current->value;
//		}
//		current = current->next;
//	}
//	return "Key not found";
//}
//
//void removeItem(struct HashTable* hashTable, int key)
//{
//	int index = hash(key);
//	struct Node* current = hashTable->table[index];
//	struct Node* prev = NULL;
//	while(current != NULL)
//	{
//		if (current->key == key) {
//			if (prev == NULL) {
//				hashTable->table[index] = current->next;
//			}
//			else {
//				prev->next = current->next;
//			}
//			free(current->value);
//			free(current);
//			return;
//		}
//		prev = current;
//		current = current->next;
//	}
//}
//
//
//// ������
//int main() {
//	struct HashTable hashTable;
//	memset(&hashTable, 0, sizeof(struct HashTable));
//
//	insert(&hashTable, 10, "Alice");
//	insert(&hashTable, 20, "Bob");
//	insert(&hashTable, 30, "Charlie");
//
//	printf("Value for key 20: %s\n", search(&hashTable, 20));
//	printf("Value for key 40: %s\n", search(&hashTable, 40));
//
//	removeItem(&hashTable, 20);
//
//	printf("Value for key 20 after removal: %s\n", search(&hashTable, 20));
//
//	return 0;
//}