// pre order traversal in binary tree
#include<bits/stdc++.h>
using namespace std;

template<typename T>

class treenode
{
    public:
    T data;
    vector<treenode<T>*> children;
    treenode(T data)
    {
        this->data = data;
    }
};

treenode<int>* input_tree()
{
    int rootdata;
    cout<<"enter root data: ";
    cin>>rootdata;
    treenode<int>* root = new treenode<int>(rootdata);
    queue<treenode<int>*> pending_nodes;
    pending_nodes.push(root);
    while(pending_nodes.size())
    {
        treenode<int>* first_node = pending_nodes.front();
        pending_nodes.pop();
        int child;
        cout<<"enter childrens of root data "<<first_node->data<<" : ";
        cin>>child;
        for(int i=0;i<child;i++)
        {
            int child_data;
            cout<<"enter "<<i+1<<" th child data: ";
            cin>>child_data;
            treenode<int>* childs = new treenode<int>(child_data);
            first_node->children.push_back(childs);
            pending_nodes.push(childs);
        }
    }
    return root;
}

void pre_order(treenode<int>* root)
{
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        pre_order(root->children[i]);
    }
}

int main()
{
    treenode<int>* root = input_tree();
    pre_order(root);
    return 0;
}
// 1 3 2 3 4 2 5 6 2 7 8 0 1 9 0 0 0 0