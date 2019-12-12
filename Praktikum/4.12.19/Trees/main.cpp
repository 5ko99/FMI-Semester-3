#include <iostream>

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

//LDK
void postOrder(Node *root) {
    if(root== nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout<<root->data<<' ';
}
//LKD
void inOrder(Node *root) {
    if(root== nullptr)
        return;
    inOrder(root->left);
    std::cout<<root->data<<' ';
    inOrder(root->right);
}
int height(Node* root) {
    if (root == nullptr)
        return -1;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = height(root->left);
        int rDepth = height(root->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth +1);
        else return(rDepth +1);
    }
}
int main() {

    return 0;
}
