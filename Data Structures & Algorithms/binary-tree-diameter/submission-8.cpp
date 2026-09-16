/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int maxDiameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
    if (root == nullptr)
	{
		return 0;
	}

    height(root);
    return maxDiameter;
    }

    int height(TreeNode* root)
{
	if (root == nullptr)
	{
		return 0;
	}

    int left = height(root->left);
    int right = height(root->right);

    maxDiameter = std::max(maxDiameter, left + right);

    return 1 + max(left, right);
}
};
