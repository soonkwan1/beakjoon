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

struct Node{
    string name;
    int month, day, year;
};
struct compMin{
    bool operator() (const Node& a, const Node& b) const{
        if (a.year == b.year){
            if (a.month == b.month) return a.day < b.day;
            return a.month < b.month;
        }
        return a.year < b.year;
    }
};
void INPUT(){
    vector<Node> v;
    int n; cin >> n;
    while (n--){
        Node tmp;
        cin >> tmp.name >> tmp.day >> tmp.month >> tmp.year;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), compMin());
    cout << v[v.size() - 1].name << endl;
    cout << v[0].name << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}