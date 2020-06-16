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
    bool checkparent(TreeNode*root,int x,int y){
        if(root==NULL){
            return false;
        }
        if(root->left==NULL||root->right==NULL){
            return checkparent(root->left,x,y)||checkparent(root->right,x,y);
        }
        return (root->left->val==x&&root->right->val==y)||(root->right->val==x&&root->left->val==y)||checkparent(root->left,x,y)||checkparent(root->right,x,y);
    }
 int findlevel(TreeNode*root,int x){
     if(root==NULL){
         return INT_MIN;
     }
     if(root->val==x){
         return 0;
     }
   return 1+max(findlevel(root->left,x),findlevel(root->right,x));
 }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL){
            return false;
        }
        int a=findlevel(root,x);
        int b=findlevel(root,y);
        cout<<checkparent(root,x,y)<<" "<<a<<" "<<b;
        return (a==b)&&(!checkparent(root,x,y));
    }
};
