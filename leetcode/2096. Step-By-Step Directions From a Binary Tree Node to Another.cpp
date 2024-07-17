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
    bool found=false;
    bool getpath(TreeNode* root, int key, string& path) {
        if (root == nullptr) return false;
        if (root->val == key) return true;

        path.push_back('L');
        if (getpath(root->left, key, path)) return true;
        path.pop_back();

        path.push_back('R');
        if (getpath(root->right, key, path)) return true;
        path.pop_back();

        return false;
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string startPath, destPath;
        getpath(root, startValue, startPath);
        getpath(root, destValue, destPath);

        // Find the common prefix length
        int i = 0;
        while (i < startPath.length() && i < destPath.length() && startPath[i] == destPath[i]) 
            i++;

        string result(startPath.length() - i, 'U');    // Steps to move up to the common ancestor

        result += destPath.substr(i);                    // Steps to move down to the destination
        
        return result;
    }
};
