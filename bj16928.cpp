#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void bfs(map<int, int> ladder, map<int, int> snake, int start){
    deque<pair<int,int> > nodes;
    nodes.push_back(make_pair(start, 0));

    int visited[101] = {0,};
    visited[start] = 1;
    while(!nodes.empty()){
        int node = nodes.front().first;
        int cost = nodes.front().second;
        nodes.pop_front();

        if (node == 100){
            cout << cost << "\n";
            break;
        }

        for (int i=1; i<=6; i++){
            if (node+i > 100){
                break;
            }
            
            if (ladder[node+i]){
                if (visited[ladder[node+i]] == 0){
                    nodes.push_back(make_pair(ladder[node+i], cost+1));
                    visited[ladder[node+i]] = 1;
                }
            }
            else if (snake[node+i]){
                if (visited[snake[node+i]] == 0){
                    nodes.push_back(make_pair(snake[node+i], cost+1));
                    visited[snake[node+i]] = 1;
                }
            }
            else if (visited[node+i] != 1){
                visited[node+i] = 1;
                nodes.push_back(make_pair(node+i, cost+1));
            }
            
        }
    }
}

void INPUT(){
    int l, sn; cin >> l >> sn;
    map<int, int> ladder;
    map<int, int> snake;
    int s, e;
    for (int i=0; i<l; i++){
        cin >> s >> e;
        ladder[s] = e;
    }
    for (int i=0; i<sn; i++){
        cin >> s >> e;
        snake[s] = e;
    }

    bfs(ladder, snake, 1);

}


int main(){
    INIT();
    INPUT();
    return 0;
}