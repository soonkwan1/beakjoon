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

string makeKey(int a, int b, int c){
    string ret = "";

    string ast = to_string(a);
    string bst = to_string(b);
    string cst = to_string(c);
    ret = ast + "," + bst + "," + cst;

    return ret;
}
typedef struct Node{
    int g, s, b;
} Node;
struct compRank{
    bool operator() (const Node& a, const Node& br){
        if (a.g != br.g) return a.g > br.g;
        else if (a.s != br.s) return a.s > br.s;
        return a.b > br.b;
    }
};
void INPUT(){
    int n, k; cin >> n >> k;
    int ansg, anss, ansb;

    vector<Node> ranking;
    unordered_map<string, int> um;
    
    for (int i=0; i<n; i++){
        int team, g, s, b; cin >> team >> g >> s >> b;
        if (team == k){
            ansg = g, anss = s, ansb = b;
        }

        string tmp = makeKey(g, s, b);
        if (um[tmp]) {
            um[tmp]++;
            continue;
        }

        um[tmp]++;
        Node tmpNode;
        tmpNode.g = g, tmpNode.s = s, tmpNode.b = b;
        ranking.push_back(tmpNode);
    }
    sort(ranking.begin(), ranking.end(), compRank());

    int rank = 1;
    for (int i=0; i<ranking.size(); i++){
        // cout << ranking[i].g << " " << ranking[i].s << " " << ranking[i].b << endl;

        if (ranking[i].g == ansg && ranking[i].s == anss && ranking[i].b == ansb){
            cout << rank << endl;
            break;
        }
        else{
            string tmp = makeKey(ranking[i].g, ranking[i].s, ranking[i].b);
            rank += um[tmp];
        }
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}