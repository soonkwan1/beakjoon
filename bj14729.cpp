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
    cout << fixed;
    cout.precision(3);

    priority_queue<double, vector<double>, greater<double> > pq;
    int n; cin >> n;
    while (n--){
        double tmp; cin >> tmp;
        pq.push(tmp);
    }

    for (int i=0; i<7; i++){
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