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

	// 创建初始叶子节点并放入优先队列
	for (int w : weights)
	{
		minHeap.push(new TreeNode(w));
	}

	// 合并节点知道堆中只剩一个节点
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

// 中序遍历
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
//	// 构建哈夫曼树
//	TreeNode* root = buildHuffmanTree(weights);
//
//	// 中序遍历
//	vector<int> result;
//	inorderTraversal(root, result);
//	// 输出结果
//	for (size_t i = 0; i < result.size(); ++i) {
//		if (i > 0) cout << " ";
//		cout << result[i];
//	}
//	cout << endl;
//}