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

struct compMax{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    priority_queue<int> pq;
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
}
void SOLUTION(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }  
    sort(v.begin(), v.end(), compMax());
    for (int i=0; i<n; i++) cout << v[i] << endl;
}
int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}