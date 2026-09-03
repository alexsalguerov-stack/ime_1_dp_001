#include <iostream>
using namespace std;

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
};

int addSimple(TreeNode* root) {
    if (root == nullptr) return 0;

    int sum = root->value;

    if (root->left != nullptr)
        sum += root->left->value;

    if (root->right != nullptr)
        sum += root->right->value;

    return sum;
}

int main() {
    TreeNode* root = new TreeNode{
        50,
        new TreeNode{20, nullptr, nullptr},
        new TreeNode{80, nullptr, nullptr}
    };

    cout << "Suma del arbol: " << addSimple(root) << endl;

    return 0;
}