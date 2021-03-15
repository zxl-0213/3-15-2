/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //树的节点大小
 int TreeSize(struct TreeNode* root)
 {
    if(root==NULL)
    {
        return 0;
    }
    return 1+TreeSize(root->left)+TreeSize(root->right);
 }
 //将树中节点按照中序都一一对应放到数组中
 void _inorderTraversal(struct TreeNode* root,int*a,int* pi)
 {
     if(root==NULL)
     {
         return;
     }
     
     
    
    _inorderTraversal(root->left,a,pi);
    a[*pi]=root->val;
    (*pi)++;
     
    _inorderTraversal(root->right,a,pi);
     
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int size=TreeSize(root);
    *returnSize=size;
    int *a=(int*)malloc(sizeof(int)*size);
    int i=0;
    _inorderTraversal(root,a,&i);
    return a;
}