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
pair<int,int> getPour(int n, int m, int mx){
    // n : 비우려는 통의 현재 양
    // m : 채우려는 통의 현재 양
    // mx : 채우려는 통의 max치

    if (n == 0) return make_pair(n, m);
    else if (m == mx) return make_pair(n, m);
    
    int t1 = n + m >= mx ? n - (mx - m) : 0;
    int t2 = n + m >= mx ? mx : n + m;
    return make_pair(t1, t2);
}
bool getCheck(int x, int y, int z){
    if (visited[x][y][z]){
        return false;
    }
    visited[x][y][z] = true;
    return true;
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
        
        if (ix == 0) ans[iz] = 1;
        
        dq.pop_front();

        Node n_node;
        // Pour x
        pair<int,int> px1 = getPour(ix, iy, b);
        if (getCheck(px1.first, px1.second, iz)) {
            n_node.x = px1.first, n_node.y = px1.second, n_node.z = iz;
            dq.push_back(n_node);
        }
        pair<int,int> px2 = getPour(ix, iz, c);
        if (getCheck(px2.first, iy, px2.second)) {
            n_node.x = px2.first, n_node.y = iy, n_node.z = px2.second;
            dq.push_back(n_node);
        }

        // Pour y
        pair<int,int> py1 = getPour(iy, ix, a);
        if (getCheck(py1.second, py1.first, iz)) {
            n_node.x = py1.second, n_node.y = py1.first, n_node.z = iz;
            dq.push_back(n_node);
        }
        pair<int,int> py2 = getPour(iy, iz, c);
        if (getCheck(ix, py2.first, py2.second)) {
            n_node.x = ix, n_node.y = py2.first, n_node.z = py2.second;
            dq.push_back(n_node);
        }

        // Pour z
        pair<int,int> pz1 = getPour(iz, ix, a);
        if (getCheck(pz1.second, iy, pz1.first)) {
            n_node.x = pz1.second, n_node.y = iy, n_node.z = pz1.first;
            dq.push_back(n_node);
        }
        pair<int,int> pz2 = getPour(iz, iy, b);
        if (getCheck(ix, pz2.second, pz2.first)) {
            n_node.x = ix, n_node.y = pz2.second, n_node.z = pz2.first;
            dq.push_back(n_node);
        }
    }
}
void INPUT(){
    cin >> a >> b >> c;
    getVisit();
    ans = new bool[c+1]; fill_n(ans, c+1, 0);

    bfs();
    for (int i=0; i<=c; i++){
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