// count leaf nodes binary tree
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

void print_tree(treenode<int>* root)
{
    cout<<root->data<<" : ";
    queue<treenode<int>*> pending_nodes;
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<" , ";
        pending_nodes.push(root->children[i]);
    }
    cout<<"\n";
    while(pending_nodes.size())
    {
        treenode<int>* first_node = pending_nodes.front();
        pending_nodes.pop();
        cout<<first_node->data<<" : ";
        for(int i=0;i<first_node->children.size();i++)
        {
            cout<<first_node->children[i]->data<<" , ";
            pending_nodes.push(first_node->children[i]);
        }
        cout<<"\n";
    }
}
int ans = 0;
int count_leaf_nodes(treenode<int>* root)
{
    if(root->children.size()==0)
    {
        ans += 1;
        return ans;
    }
    else
    {
        for(int i=0;i<root->children.size();i++)
        {
            ans = count_leaf_nodes(root->children[i]);
        }
    }
    return ans;
}

int main()
{
    treenode<int>* root = input_tree();
    print_tree(root);
    int ans = count_leaf_nodes(root);
    cout<<"there are "<<ans<<" leaf nodes in the tree\n";
    return 0;
}