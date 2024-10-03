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
    vector<string> v;
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    for (int i=0; i<n; i++){
        string tmp; cin >> tmp;
        string word = "";
        for (int j=0; j<tmp.size(); j++){
            word = tmp[j] + word;
        }
        pq.push(stol(word));
    }
    
    while (!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
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