#include <iostream>
#include <vector>
#define pii pair<int, int>
using namespace std;

vector<pii> chess;

struct Direction{
    int y, x;
};

Direction dir[8] = {{-2, -1}, {-2, 1}, {-1, -2}, {1, -2}, 
                    {2, -1}, {2, 1}, {1, 2}, {-1, 2}};

bool visited[7][7];

bool solve(){
    visited[chess[0].first][chess[0].second] = true;
    for(int i = 1; i < chess.size(); i++){
        int ny = chess[i - 1].first;
        int nx = chess[i - 1].second;
        
        int dy = chess[i].first;
        int dx = chess[i].second;
        
        // visited Check
        if(visited[dy][dx]) return false;
        visited[dy][dx] = true;
        
        bool flag = false;
        for(int j = 0; j < 8; j++){
            // can move
            if(ny + dir[j].y == dy && nx + dir[j].x == dx){
                flag = true;
                break;
            }
        }
        
        if(!flag){
            return false;
        }
    }
    
    for(int i = 0; i < 8; i++){ // Last to First
        if(chess[35].first + dir[i].y == chess[0].first
        && chess[35].second + dir[i].x == chess[0].second){
            return true;
        }
    }
    return false;
}

int main(){
    for(int i = 0; i < 36; i++){
        string v; cin >> v;
        int ny = 7 - (v[1] - '0');
        int nx = (v[0] - 'A') + 1;
        chess.push_back({ny, nx});
    }
    
    if(solve()) cout << "Valid";
    else cout << "Invalid";
    
    return 0;
}
