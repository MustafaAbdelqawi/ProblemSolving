
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data);
};
TreeNode* insert(TreeNode* node, int newValue);
void inorder(TreeNode* root);
void preOrder(TreeNode* root);
TreeNode* getSuccessor(TreeNode* root);
TreeNode* deleteNode(TreeNode* root, int x);
