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

int** cloud;
void getMem(int h, int w){
    cloud = new int*[h];
    for (int i=0; i<h; i++){
        cloud[i] = new int[w];
        fill_n(cloud[i], w, 10000);
    }
}
void delMem(int h){
    for (int i=0; i<h; i++) delete[] cloud[i];
    delete[] cloud;
}
void printCloud(int h, int w){
    for (int i=0; i<h; i++){
        for (int j=0; j<w; j++){
            if (cloud[i][j] == 10000) cloud[i][j] = -1;
            cout << cloud[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int h, w; cin >> h >> w;
    getMem(h, w);
    for (int i=0; i<h; i++){
        // 구름 여부 입력 받기
        string line; cin >> line;

        // 입력에 값에 따른 처리
        for (int j=0; j<line.size(); j++){
            // if cloud
            if (line[j] == 'c'){
                cloud[i][j] = 0;
                int tmp = 0;
                // cloud move
                for (int k=j+1; k<w; k++){
                    tmp++;
                    cloud[i][k] = min(cloud[i][k], tmp);
                }
            }
        }
    }
    printCloud(h, w);
    delMem(h);
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}