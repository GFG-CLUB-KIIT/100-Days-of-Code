// height of binary tree
#include<bits/stdc++.h>
using namespace std;
template<typename T>

class binarytreenode
{
    public:
    T data;
    binarytreenode<T>* left;
    binarytreenode<T>* right;
    binarytreenode(T data)
    {   
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~binarytreenode()
    {
        delete right;
        delete left;
    }
};

binarytreenode<int>* input()
{
    int root_data;
    cout<<"enter root data: ";
    cin>>root_data;
    binarytreenode<int>* root = new binarytreenode<int>(root_data);
    queue<binarytreenode<int>*> pending_nodes;
    pending_nodes.push(root);
    while(pending_nodes.size())
    {
        int left_node_data,right_node_data;
        binarytreenode<int>* first_node_data = pending_nodes.front();
        pending_nodes.pop();
        cout<<"enter left child data of node "<<first_node_data->data<<" : ";
        cin>>left_node_data;
        if(left_node_data != -1)
        {
            binarytreenode<int>* left_child = new binarytreenode<int>(left_node_data);
            first_node_data->left = left_child;
            pending_nodes.push(left_child);
        }
        cout<<"enter right child data of node "<<first_node_data->data<<" : ";
        cin>>right_node_data;
        if(right_node_data != -1)
        {
            binarytreenode<int>* right_child = new binarytreenode<int>(right_node_data);
            first_node_data->right = right_child;
            pending_nodes.push(right_child);
        }
    }
    return root;
}

void print(binarytreenode<int>* root)
{
    cout<<root->data<<" : ";
    queue<binarytreenode<int>*> pending_nodes;
    if(root->left)
    {
        cout<<"L"<<root->left->data<<" , ";
        pending_nodes.push(root->left);
    }
    if(root->right)
    {
        cout<<"R"<<root->right->data<<" , ";
        pending_nodes.push(root->right);
    }
    cout<<"\n";
    while(pending_nodes.size())
    {
        binarytreenode<int>* first_node = pending_nodes.front();
        pending_nodes.pop();
        cout<<first_node->data<<" : ";
        if(first_node->left)
        {
            cout<<"L"<<first_node->left->data<<" , ";
            if(first_node->left)
            {
                pending_nodes.push(first_node->left);
            }
        }
        if(first_node->right)
        {
            cout<<"R"<<first_node->right->data<<" , ";
            if(first_node->right)
            {
                pending_nodes.push(first_node->right);
            }
        }
        cout<<"\n";
    }
}

// int height(binarytreenode<int>* root)
// {
//     if(!root)
//     {
//         return 0;
//     }
//     return 1 + max(root->right,root->left);
// }

// int diameter(binarytreenode<int>* root)
// {
//     if(!root)
//     {
//         return 0;
//     }
//     int option1 = height(root->left) + height(root->right);
//     int option2 = diameter(root->left);
//     int option3 = diameter(root->right);
//     return max(option1,max(option2,option3));
// }

int height(binarytreenode<int>* root)
{
    if(!root)
    {
        return 0;
    }
    int left_height = 1 + (height(root->left));
    int right_height = 1 + (height(root->right));
    return max(left_height , right_height);
}
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 15 -1 -1 -1 -1 -1 -1 16 -1 -1 -1
int main()
{
    binarytreenode<int>* root = input();
    // print(root);
    if(root->data == -1)
    {
        cout<<"\nheight of binary tree is: "<<0;
    }
    else
    {
        int ans = height(root);
        cout<<"\nheight of binary tree is: "<<ans;
    }
    // int ans = diameter(root);
    // cout<<"diameter of tree  is: "<<ans;
    delete root;
    return 0;
}