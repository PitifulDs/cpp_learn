#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
	int weight;
	int height;
	TreeNode* left;
	TreeNode* right;
	
	TreeNode(int w, int h = 1) :weight(w), height(h), left(NULL), right(NULL) {}
	TreeNode(int w, TreeNode* l, TreeNode* r) : weight(w), left(l), right(r) {
		height = max(l ? l->height : 0, r ? r->height : 0) + 1;
	}
};

struct compareNode {
	bool operator()(TreeNode* a, TreeNode* b)
	{
		if (a->weight == b->weight)
		{
			return a->height > b->height;
		}
		
		return a->weight > b->weight;
	}
};


TreeNode* buildHuffmanTree(vector<int>& weights)
{
	priority_queue<TreeNode*, vector<TreeNode*>, compareNode> minHeap;

	// ������ʼҶ�ӽڵ㲢�������ȶ���
	for (int w : weights)
	{
		minHeap.push(new TreeNode(w));
	}

	// �ϲ��ڵ�֪������ֻʣһ���ڵ�
	while (minHeap.size() > 1)
	{
		TreeNode* left = minHeap.top();
		minHeap.pop();
		TreeNode* right = minHeap.top();
		minHeap.pop();

		TreeNode* megred = new TreeNode(left->weight + right->weight, left, right);
		minHeap.push(megred);


	}

	return minHeap.top();

}

// �������
void inorderTraversal(TreeNode* root, vector<int>& result)
{
	if (root == nullptr) return;
	inorderTraversal(root->left, result);
	result.push_back(root->weight);
	inorderTraversal(root->right, result);
}

//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> weights(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> weights[i];
//	}
//
//	// ������������
//	TreeNode* root = buildHuffmanTree(weights);
//
//	// �������
//	vector<int> result;
//	inorderTraversal(root, result);
//	// ������
//	for (size_t i = 0; i < result.size(); ++i) {
//		if (i > 0) cout << " ";
//		cout << result[i];
//	}
//	cout << endl;
//}