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

int SumOfNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }

   int leftSum=SumOfNodes(root->left);
   int righSum=SumOfNodes(root->right);
   return leftSum+righSum+root->data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

   // idx = -1; // important reset
    Node* root = buildTree(preorder);

    cout << "Sum Of Nodes: "<<SumOfNodes(root)<<endl;
    
    cout << endl;

    return 0;
}
