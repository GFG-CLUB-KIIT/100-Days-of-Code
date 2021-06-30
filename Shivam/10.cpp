// diamter of binary tree
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

// not very good approach 
// int height(binarytreenode<int>* root)
// {
//     if(!root)
//     {
//         return 0;
//     }
//     return 1 + max(height(root->left) , height(root->right));
// }

// int diameter(binarytreenode<int>* root)
// {
//     if(!root)
//     {
//         return 0;
//     }
//     int l = height(root->left);
//     int r = height(root->right);
//     int currdiameter = l+r;
//     int ld = diameter(root->left);
//     int rd = diameter(root->right);
//     return max(currdiameter,max(rd,ld));
// }


// ***********************************************************************************************************************************



// best approach is below

// pair<int, int> heightDiameter(binarytreenode<int>* root) 
// {
// 	if (root == NULL) 
//     {
// 		pair<int, int> p;
// 		p.first = 0;
// 		p.second = 0;
// 		return p;
// 	}
// 	pair<int, int> leftAns = heightDiameter(root->left);
// 	pair<int,int> rightAns = heightDiameter(root->right);
// 	int ld = leftAns.second;
// 	int lh = leftAns.first;
// 	int rd = rightAns.second;
// 	int rh = rightAns.first;
// 	int height = 1 + max(lh, rh);
// 	int diameter = max(lh + rh, max(ld, rd));
// 	pair<int, int> p;
// 	p.first = height;
// 	p.second = diameter;
// 	return p;
// }
pair<int,int> height_diameter(binarytreenode<int>* root)
{
    if(!root)
    {
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int,int> leftans = height_diameter(root->left);
    pair<int,int> rightans = height_diameter(root->right);
    int lh = leftans.first;
    int ld = leftans.second;
    int rd = rightans.second;
    int rh = rightans.first;
    int height = 1 + max(lh,rh);
    int diameter = max(lh + rh , max(ld,rd));
    pair<int,int> ans;
    ans.first = height;
    ans.second = diameter;
    return ans;
}

// 100 50 150 25 75 125 175 -1 40 60 -1 110 130 -1 200 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    binarytreenode<int>* root = input();
    print(root);
    pair<int, int> p = height_diameter(root);
    cout << "Height: " << p.first << endl;
	cout << "Diameter: " << p.second << endl;
	delete root;
    return 0;
}