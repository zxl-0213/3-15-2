 */
//计算节点个数大小，确定数组大小
int TreeSize(struct TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+TreeSize(root->left)+TreeSize(root->right);
}
///将树中元素按照前序放到数组里面
void _preorderTraversal(struct TreeNode* root,int*a,int*pi)
{
    if(root==NULL)
    {
        return;
    }
    a[*pi]=root->val;
    (*pi)++;
    _preorderTraversal(root->left,a,pi);
    _preorderTraversal(root->right,a,pi);
    
}
int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int size=TreeSize(root);
    *returnSize=size;
    int* a=(int*)malloc(sizeof(int)*size);
    int i=0;
    _preorderTraversal(root,a,&i);
    return a;
}