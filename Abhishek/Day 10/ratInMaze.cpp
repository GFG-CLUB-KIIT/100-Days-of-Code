#include <bits/stdc++.h>
using namespace std;

bool ratInMaze(char ch[][10], int path[10][10], int i, int j, int n) {
	// base case
	if (i == n - 1 and j == n - 1) {
		path[i][j] = 1;
		for (int a = 0; a < n; a++) {
			for (int b = 0; b < n; b++) {
				cout << path[a][b] << " ";
			} cout << endl;
		}
		cout << endl;
		return true;
	}


	// recc case
	// Rat sholud be inside maze
	if (i > n or j > n) {
		return false;
	}

	// Check if current cell is blocked
	if (ch[i][j] == 'X') {
		return false;
	}

	// Assume solution exists
	path[i][j] = 1;
	bool right = ratInMaze(ch, path, i, j + 1, n);
	bool down = ratInMaze(ch, path, i + 1, j, n);

	// marking the current position as 0 while returning
	path[i][j] = 0;

	if (right || down)
		return true;
	else
		return false;

}


int main()
{
	char maze[10][10] = {"00X0",
	                     "00X0",
	                     "000X",
	                     "0X00"
	                    };
	int path[10][10] = {0};
	bool ans = ratInMaze(maze, path, 0, 0, 4);

}

