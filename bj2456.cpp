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
    int sum;
    int three;
    int two;
    int one;
    int cnt;
}Node;

void getNode(Node& nod, int n){
    if (n == 3) nod.three += 3;
    else if (n == 2) nod.two += 2;
    else nod.one++;
    nod.sum += n;
}

struct compNode{
    bool operator() (const Node& a, const Node& b) const{
        if (a.sum != b.sum) return a.sum > b.sum;
        else if (a.three != b.three) return a.three > b.three;
        else if (a.two != b.two) return a.two > b.two;
        return a.one > b.one;
    }
};

void INPUT(){
    vector<Node> v;
    int cnt = 1;
    for (int i=0; i<3; i++) {
        Node nod;
        nod.one = 0;
        nod.two = 0;
        nod.three = 0;
        nod.sum = 0;
        nod.cnt = cnt++;
        v.push_back(nod);
    }
    
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int score[3];
        for (int j=0; j<3; j++){
            cin >> score[j];
            getNode(v[j], score[j]);
        }
    }

    sort(v.begin(), v.end(), compNode());

    // for (int i=0; i<3; i++){
    //     cout << v[i].cnt << " " << v[i].one << " " << v[i].two << " " << v[i].three 
    //     << " " << v[i].sum << endl;
    // }

    if (v[0].sum == v[1].sum && v[0].three == v[1].three &&
    v[0].two == v[1].two) cout << 0 << " " << v[0].sum << endl;
    else cout << v[0].cnt << " " << v[0].sum << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}