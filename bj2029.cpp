#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

char sq1[10][10];
char sq2[10][10];

bool checkSq(int x, int y, int idx){
    // for (int i=x; i<x+3*idx+1; i++){
    //     if (sq2[i][y] != sq1[i][y]) return false;
    //     if (sq2[i][y + 3 * idx] != sq1[i][y + 3 * idx]) return false;
    // }
    // for (int i=y; i<y+3*idx+1; i++){
    //     if (sq2[x][i] != sq1[x][i]) return false;
    //     if (sq2[x + 3 * idx][i] != sq1[x + 3 * idx][i]) return false;
    // }

    for (int i=0; i<3*idx+1; i++) {
        if (sq1[x + i][y] != sq2[x + i][y]) return false;
        if (sq1[x + i][y + 3 * idx] != sq2[x + i][y + 3 * idx]) return false;
        if (sq1[x][y + i] != sq2[x][y + i]) return false;
        if (sq1[x + 3 * idx][y + i] != sq2[x + 3 * idx][y + i]) return false;
    }

    return true;
}

int checkSq1(int x, int y, int idx){
    int tmp = 3 * idx + 1;

    for (int i=x; i<x + tmp; i++){
        for (int j=y; j<y + tmp; j++){
            if ((i != x) && (i != x + tmp - 1) 
            && (j != y) && (j != y + tmp - 1)) continue;
            if (sq1[i][j] != sq2[i][j]) return 0;
        }   
    }
    return 1;
}

void printSq1(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << sq1[i][j];
        }
        cout << endl;
    }
}
void printSq2(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << sq2[i][j];
        }
        cout << endl;
    }
}

void INPUT(){
    int cnt = 0;
    string r1 = "+--";
    string r2 = "|..";

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (i % 3 == 0) sq1[i][j] = r1[j % 3];
            else sq1[i][j] = r2[j % 3];            
        }
    }

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cin >> sq2[i][j];
            if (sq1[i][j] != sq2[i][j]) cnt++;
        }
    }

    // printSq1();
    // printSq2();

    int ans = 0;
    for (int i=0; i<9; i+=3){
        for (int j=0; j<9; j+=3){
            int tmp = checkSq1(i, j, 1); 
            ans += tmp;
        }
    }
    ans += checkSq1(0, 0, 2);
    ans += checkSq1(0, 3, 2);
    ans += checkSq1(3, 0, 2);
    ans += checkSq1(3, 3, 2);
    ans += checkSq1(0, 0, 3);


    cout << cnt / 2 << " " << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}