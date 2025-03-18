#include <iostream>
#include "tree.hpp"

TreeNode::TreeNode(int value){
    data = value;
    left = nullptr;
    right = nullptr;
}

TreeNode*
insert(TreeNode* root,int newValue){
    TreeNode *newNode = new TreeNode(newValue);
    if(root == nullptr){
        root = newNode;
        return root;
    }
    if(root->data > newValue){
        root->left = insert(root->left, newValue);
    }
    else{
        root->right = insert(root->right, newValue);
    }

    return root;
}

// A utility function to do inorder tree traversal
void 
inorder(TreeNode* root) {
    if (root != NULL) {
        inorder(root->left);
        std::cout << root->data << "\n";
        inorder(root->right);
    }
}


// A utility function to do inorder tree traversal
void 
preOrder(TreeNode* root) {
    if (root != NULL) {
        preOrder(root->right);
        std::cout << root->data << "\n";
        preOrder(root->left);
    }
}

TreeNode* getSuccessor(TreeNode* root)
{
    root = root->right;
    while (root != NULL && root->left != NULL)
        root = root->left;
    return root;
}


// This function deletes a given key x from
// the give BST and returns modified root of
// the BST (if it is modified)
TreeNode* deleteNode(TreeNode* root, int x)
{

    // Base case
    if (root == NULL)
        return root;

    // If key to be searched is in a subtree
    if (root->data > x)
        root->left = deleteNode(root->left, x);
    else if (root->data < x)
        root->right = deleteNode(root->right, x);

    // If root matches with the given key
    else {

        // Cases when root has 0 children
        // or only right child
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        // When root has only left child
        if (root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // When both children are present
        TreeNode* succ = getSuccessor(root);
        root->data = succ->data;
        root->right = deleteNode(root->right, succ->data);
    }
    return root;
}