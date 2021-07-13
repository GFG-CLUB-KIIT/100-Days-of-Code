// Problem Link : https://leetcode.com/problems/valid-sudoku/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {

    int n = board.size();
    map<int, set<int>> r, c, box;
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          // if prev found return false
          int box_index = i / 3 * 3 + j / 3;
          if (r[i].find(board[i][j]) != r[i].end() ||
              c[j].find(board[i][j]) != c[j].end() ||
              box[box_index].find(board[i][j]) != box[box_index].end()) {
            return false;
          }
          // else if not vis
          // store
          r[i].insert(board[i][j]);
          c[j].insert(board[i][j]);
          box[box_index].insert(board[i][j]);
        }
      }
    }
    return true;
  }
};