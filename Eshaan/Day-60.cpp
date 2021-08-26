//https://www.hackerrank.com/challenges/3d-surface-area/problem
//HackerRank Day-60

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int T[200][200];

int main() {
    int H, W;
    while(cin >> H >> W) {
        for(int i=0; i<H; i++) 
            for(int j=0; j<W; j++) 
                cin >> T[i][j];
                
        int total = 2*H*W;
        for(int i=0; i<H; i++) {
            total += T[i][0];
            for(int j=1; j<W; j++)
                total += abs(T[i][j] - T[i][j-1]);
            total += T[i][W-1];
        }
        for(int i=0; i<W; i++) {
            total += T[0][i];
            for(int j=1; j<H; j++)
                total += abs(T[j][i] - T[j-1][i]);
            total += T[H-1][i];
        }
        
        cout << total << endl;
    }
}