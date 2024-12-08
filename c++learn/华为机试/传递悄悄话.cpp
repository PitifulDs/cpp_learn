#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// 定义二叉树结构
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
   	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// 构建二叉树
TreeNode* bulidTree(vector<int>& nums, int index)
{
	if (index >= nums.size() || nums[index] == -1)
	{
		index++;
		return nullptr;
	}

	TreeNode *root = new TreeNode(nums[index]);
	root->left = bulidTree(nums, index * 2 + 1);
   	root->right = bulidTree(nums, index * 2 + 2);

	return root;

}

int maxTime(TreeNode* root)
{
	if(!root) return 0;
	int leftTime = maxTime(root->left);
	int rightTime = maxTime(root->right);
	int res = max(leftTime, rightTime) + root->val;
	return res;

}
//
//int main()
//{
//	vector<int> nums;
//	int n;
//	while (cin >> n)
//	{
//		nums.push_back(n);
//	}
//
//	// 构建二叉树
//	TreeNode* root = bulidTree(nums, 0);
//
//	int result = maxTime(root);
//	cout << result << endl;
//}