#include <iostream>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr){}
};

void inorder(TreeNode* root){
    if(root==nullptr) return ;
    inorder(root->left);
    cout<<root->val<<"";
    inorder(root->right);
}


int main(){
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);

    cout<<"中序遍历结果";
    inorder(root);
    cout<<endl;
    return 0;



}