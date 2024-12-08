#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;

//struct Node {
//	int val;
//	Node* left;
//	Node* middle;
//	Node* right;
//
//	Node(int v) : val(v), left(nullptr), middle(nullptr), right(nullptr) {}
//};
//
//Node* insert(Node* root, int value)
//{
//	if (root == nullptr)
//	{
//		return new Node(value);
//	}
//
//	if (value < root->val - 500)
//	{
//		root->left = insert(root->left, value);
//	}
//	else if (value > root->val + 500)
//	{
//		root->right = insert(root->right, value);
//	}
//	else {
//		root->middle = insert(root->middle, value);
//	}
//
//	return root;
//}
//
//int getHeight(Node* root)
//{
//	if (root == nullptr)
//	{
//		return 0;
//	}
//
//	int leftHeight = getHeight(root->left);
//	int middleHeight = getHeight(root->middle);
//	int rightHeight = getHeight(root->right);
//	return max(max(leftHeight, middleHeight), rightHeight) + 1;
//
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> numbers(N);
//	for (int i = 0; i < N; i++) {
//		cin >> numbers[i];
//	}
//
//	Node* root = nullptr;
//	for (int i = 0; i < N; i++) 
//	{
//		root = insert(root, numbers[i]);
//	}
//
//	int result = getHeight(root);
//
//	cout << result << endl;
//}
//
//
