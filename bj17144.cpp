#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** setMem(int row, int col){
    int** tmp = new int*[row];
    for (int i=0; i<row; i++){
        tmp[i] = new int[col];
        for (int j=0; j<col; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
void freeMem(int** t, int row){
    for (int i=0; i<row; i++) delete[] t[i];
    delete[] t;
}
void diffusion(int** t, int row, int col){
    int** diff = new int*[row];
    for (int i=0; i<row; i++){
        diff[i] = new int[col];
        fill_n(diff[i], col, 0);
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] > 0){
                int cnt = 0;
                for (int k=0; k<4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if (nx>=0 && nx < row && ny>=0 && ny<col){
                        if (t[nx][ny] == -1) continue;
                        cnt++;
                        diff[nx][ny] += t[i][j]/5;
                    }
                }

                diff[i][j] -= t[i][j]/5 * cnt;
            }
        }
    }

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            t[i][j] += diff[i][j];
        }
    }

    freeMem(diff, row);
}
void airConditioner(int** t, int row, int col){

}
void printTable(int** t, int row, int col){
    cout << endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int row, col; cin >> row >> col;
    int t; cin >> t;
    int** table = setMem(row, col); 
    while (t--){
        diffusion(table, row, col);
    }
    
    // printTable(table, row, col);
    freeMem(table, row);
}   

int main(){
    INIT();
    INPUT();
    return 0;
}