#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <functional>
#include <string>
#define SIZE 100008
#define mod(ll) (1e9 + 7)
#define vi vector<int>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)
#define INF 0x3f3f3f3f
#define abs(a) ((a) > 0 ? (a) : -(a))
#define all(a) a.begin(), a.end()
#define maxelem(a) *max_element(all(a))
#define minelem(a) *min_element(all(a))
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define pb push_back
#define pi pair<ll, ll>
#define ll long long int
#define pqq priority_queue
#define reverse(a) reverse(all(a))
#define IOS                                                                    \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define rep(i, n) for (int i = 0; i < n; ++i)
#define c(a) cout << a << "\n";
using namespace std;
// longest word prefix length
struct Node {
  Node *arr[26];
  bool flag = false;

  bool contains(char c) { return (arr[c - 'a'] != NULL); }

  void put(char c, Node *newNode) { arr[c - 'a'] = newNode; }

  Node *getNext(char ch) { return arr[ch - 'a']; }

  void setFlag() { flag = true; }

  bool isFlagSet() { return flag; }
};
Node *root = new Node();
int insert(string word) {
  Node *temp = root;
  int cnt = 0;
  for (int i = 0; i < word.size(); i++) {

    if (!temp->contains(word[i])) {
      Node *newNode = new Node();
      temp->put(word[i], newNode);
    }
    if (temp->isFlagSet())
      cnt++;
    temp = temp->getNext(word[i]);
  }
  temp->setFlag();
  return cnt;
}

string longestWord(vector<string> &words) {
  sort(words.begin(), words.end());
  string res = "";

  for (int i = 0; i < words.size(); i++) {
    int cnt = insert(words[i]);
    if (cnt == words[i].size() - 1 && words[i].size() > res.size()) {
      res = words[i];
    }
  }
  return res;
}