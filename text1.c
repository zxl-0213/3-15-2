/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool  isSameTree(struct TreeNode* p,struct TreeNode* q)
{
    if(p==NULL&&q==NULL)
    {
        return true;
    }
    if(p==NULL||q==NULL)
    {
        return false;
    }
    if(p->val!=q->val)
    {
        return false;
    }
    return isSameTree(p->left,q->right)&&isSameTree(p->right,q->left);
}

bool isSymmetric(struct TreeNode* root){
    if(root==NULL)
    {
        return true;
    }
     return isSameTree(root->left,root->right);