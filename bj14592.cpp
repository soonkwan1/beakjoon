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
    int num;
    int s, c, l;
} Node;

struct compNode{
    bool operator() (const Node& a, const Node& b) const{
        if (a.s != b.s) return a.s > b.s;
        else if (a.c != b.c) return a.c < b.c;
        return a.l < b.l;
    }
};

void INPUT(){
    int n; cin >> n;
    int cnt = 1;

    vector<Node> v;
    for (int i=0; i<n; i++){
        Node tmp;
        int s, c, l; cin >> tmp.s >> tmp.c >> tmp.l;
        tmp.num = cnt; 
        cnt++;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), compNode());
    cout << v[0].num << endl;

}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}