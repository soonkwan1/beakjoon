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

void INPUT(){
    int n; cin >> n;
    string game; cin >> game;
    unordered_map<string, bool> um;

    vector<string> id_list;
    for (int i=0; i<n; i++){
        string id; cin >> id;
        if (!um[id]){
            um[id] = true;
            id_list.push_back(id);
        }
    }

    if (game == "Y") cout << id_list.size() << endl;
    else if (game == "F") cout << id_list.size() / 2 << endl;
    else cout << id_list.size() / 3 << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}