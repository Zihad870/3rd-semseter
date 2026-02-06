#include <iostream>
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

    // logic same, only TreeNode -> Node, val -> data
    static bool isSameTree(Node* p, Node* q) {
        if (p == NULL || q == NULL) {
            return p == q;
        }

        bool isLeftSame = isSameTree(p->left, q->left);
        bool isrightsame = isSameTree(p->right, q->right);

        return isLeftSame && isrightsame && p->data == q->data;
    }
};

int main() {
    // Tree 1
    Node* t1 = new Node(1);
    t1->left = new Node(2);
    t1->right = new Node(3);

    // Tree 2
    Node* t2 = new Node(1);
    t2->left = new Node(2);
    t2->right = new Node(3);

    if (Node::isSameTree(t1, t2))
        cout << "Trees are SAME";
    else
        cout << "Trees are NOT SAME";

    return 0;
}
