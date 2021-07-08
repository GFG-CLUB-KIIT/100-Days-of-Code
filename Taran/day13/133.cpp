// Problem Link :
// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
#include <bits/stdc++.h>
using namespace std;
// Definition for a Node.
class Node {
public:
  int val;
  Node *left;
  Node *right;
  Node *next;

  Node() : val(0), left(NULL), right(NULL), next(NULL) {}

  Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

  Node(int _val, Node *_left, Node *_right, Node *_next)
      : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
  Node *connect(Node *root) {
    if (root == NULL) {
      return NULL;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!(q.empty())) {
      Node *a = q.front();
      q.pop();
      if (a == NULL) {
        if (q.size() > 0)
          q.push(NULL);
      } else {
        a->next = q.front();
        if (a->left != NULL) {
          q.push(a->left);
        }
        if (a->right != NULL) {
          q.push(a->right);
        }
      }
    }
    return root;
  }
};