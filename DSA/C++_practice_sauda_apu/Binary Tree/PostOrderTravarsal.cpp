#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int>& preorder) {
    idx++;

    if (preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}
void PostOrder(Node*root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

   // idx = -1; // important reset
    Node* root = buildTree(preorder);

    cout << "Inorder TravarSal: ";
    PostOrder(root);
    cout << endl;

    return 0;
}
