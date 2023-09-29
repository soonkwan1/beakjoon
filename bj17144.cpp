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
    vector<pair<int,int> > air_pos;
    for (int i=0; i<row; i++){
        if (t[i][0] == -1){
            air_pos.push_back(make_pair(i, 0));
            air_pos.push_back(make_pair(i+1, 0));
            break;
        }
    }


    // No.1 AirConditioner
    int prev = 0; int next;
    for (int i=1; i<col; i++){
        next = t[air_pos[0].first][i];
        t[air_pos[0].first][i] = prev;
        prev = next;
    }
    for (int i=air_pos[0].first-1; i>=0; i--){
        next = t[i][col-1];
        t[i][col-1] = prev;
        prev = next;
    }
    for (int i=col-2; i>=0; i--){
        next = t[0][i];
        t[0][i] = prev;
        prev = next;
    }
    for (int i=1; i<air_pos[0].first; i++){
        next = t[i][0];
        t[i][0] = prev;
        prev = next;
    }

    // No.2 AirConditioner
    prev = 0;
    for (int i=1; i<col; i++){
        next = t[air_pos[1].first][i];
        t[air_pos[1].first][i] = prev;
        prev = next;
    }
    for (int i=air_pos[1].first+1; i<row; i++){
        next = t[i][col-1];
        t[i][col-1] = prev;
        prev = next;
    }
    for (int i=col-2; i>=0; i--){
        next = t[row-1][i];
        t[row-1][i] = prev;
        prev = next;
    }
    for (int i=row-2; i>air_pos[1].first; i--){
        next = t[i][0];
        t[i][0] = prev;
        prev = next;
    }

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
int tableTotal(int** t, int row, int col){
    int res = 0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] == -1) continue;
            res += t[i][j];
        }
    }
    return res;
}
void INPUT(){
    int row, col; cin >> row >> col;
    int t; cin >> t;
    int** table = setMem(row, col); 
    while (t--){
        diffusion(table, row, col);
        airConditioner(table, row, col);
    }
    cout << tableTotal(table, row, col) << endl;
    freeMem(table, row);
}   

int main(){
    INIT();
    INPUT();
    return 0;
}