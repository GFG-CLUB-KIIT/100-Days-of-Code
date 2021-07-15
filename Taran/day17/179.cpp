// Problem Link : https://leetcode.com/problems/insert-delete-getrandom-o1/
#include <bits/stdc++.h>
using namespace std;
class RandomizedSet {
public:
  /** Initialize your data structure here. */
  set<int> s;
  RandomizedSet() {}

  /** Inserts a value to the set. Returns true if the set did not already
   * contain the specified element. */
  bool insert(int val) {
    if (s.find(val) == s.end()) {
      s.insert(val);
      return true;
    }
    // s.insert(val);
    return false;
  }

  /** Removes a value from the set. Returns true if the set contained the
   * specified element. */
  bool remove(int val) {
    if (s.find(val) == s.end()) {
      return false;
    }
    auto it = s.find(val);
    s.erase(it);
    return true;
  }

  /** Get a random element from the set. */
  int getRandom() {
    // if(s.size()!=0)
    int n = s.size();
    int index = rand() % n;
    auto it = s.begin();
    int i = 0;
    while (index > i) {
      it++;
      i++;
    }
    return *(it);
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */