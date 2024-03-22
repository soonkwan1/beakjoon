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

typedef struct Node{
    int x, y, z;
}Node;
int a, b, c;
bool*** visited;
bool* ans;
void getVisit(){
    visited = new bool**[a+1];
    for (int i=0; i<a+1; i++){
        visited[i] = new bool*[b+1];
        for (int j=0; j<b+1; j++){
            visited[i][j] = new bool[c+1];
            fill_n(visited[i][j], c+1, 0);
        }
    }
}
void freeVisit(){
    for (int i=0; i<a+1; i++){
        for (int j=0; j<b+1; j++){
            delete[] visited[i][j];
        }
        delete[] visited[i];
    }
    delete[] visited;
}
void bfs(){
    deque<Node> dq;
    Node start; start.x = 0, start.y = 0, start.z = c;
    dq.push_back(start);
    visited[0][0][c] = true;
    

    while (!dq.empty()){
        // cout << dq.front().x << " " << dq.front().y << " " << dq.front().z << endl;
        int ix = dq.front().x;
        int iy = dq.front().y;
        int iz = dq.front().z;
        ans[iz] = true;
        dq.pop_front();

        if (ix){
            int nx = ix - (b - iy);
            
        }

        if (iy){
            if (ix < a){
                int nx = ix + iy >= a ? a : ix + iy;
                int ny = iy - nx;
                int nz = iz;
                if (!visited[nx][ny][nz]){
                    visited[nx][ny][nz] = true;
                    Node n_node; n_node.x = nx, n_node.y = ny, n_node.z = nz;
                    dq.push_back(n_node);
                }
            }
            if (iz < c){
                int nx = ix;
                int nz = iz + iy >= c ? c : iz + iy;
                int ny = iy - nz;
                if (!visited[nx][ny][nz]){
                    visited[nx][ny][nz] = true;
                    Node n_node; n_node.x = nx, n_node.y = ny, n_node.z = nz;
                    dq.push_back(n_node);
                }
            }
        }

        if (iz){    
            if (ix < a){
                int nx = ix + iz >= a ? a : ix + iz;
                int ny = iy;
                int nz = iz = nx;
                if (!visited[nx][ny][nz]){
                    visited[nx][ny][nz] = true;
                    Node n_node; n_node.x = nx, n_node.y = ny, n_node.z = nz;
                    dq.push_back(n_node);
                }
            }
            if (iy < b){
                int nx = ix;
                int ny = iy + iz >= b ? b : iy + iz;
                int nz = iz = ny;
                if (!visited[nx][ny][nz]){
                    visited[nx][ny][nz] = true;
                    Node n_node; n_node.x = nx, n_node.y = ny, n_node.z = nz;
                    dq.push_back(n_node);
                }
            }
        }
    }
}
void INPUT(){
    cin >> a >> b >> c;
    getVisit();
    ans = new bool[c+1]; fill_n(ans, c+1, 0);

    bfs();
    for (int i=1; i<=c; i++){
        if (ans[i]) cout << i << " ";
    }
    cout << endl;

    freeVisit();
    delete[] ans;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}