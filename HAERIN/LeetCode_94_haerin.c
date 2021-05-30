#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode n1 = {3, NULL, NULL};
TreeNode n2 = {2, &n1, NULL};
TreeNode n3 = {1, NULL, &n2};
TreeNode *root = &n3;

void inorder(struct TreeNode *root) {
    if (root!=NULL) {
        inorder(root->left);
        printf("%d ", root->val);
        inorder(root->right);
    }
}

int main()
{
    inorder(root);

    return 0;
}
