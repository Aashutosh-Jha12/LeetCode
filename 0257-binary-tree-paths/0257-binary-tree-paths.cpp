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
    void getPath(TreeNode* root,string path,vector<string>& arr){
        if(!root) return;
        path +=to_string(root->val);
        if(!root->left && !root->right){
            arr.push_back(path);
            return;
        }
        path += "->";
        getPath(root->left,path,arr);
        getPath(root->right,path,arr);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> arr;
        getPath(root,"",arr);
        return arr;    
    }
};