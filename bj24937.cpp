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

void printString(int n){
    deque<char> dq;
    string line = "SciComLove";
    for (int i=0; i<line.size(); i++){
        dq.push_back(line[i]);
    }

    for (int i=0; i<n; i++){
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for (int i=0; i<dq.size(); i++){
        cout << dq[i];
    }
    cout << endl;
}

void INPUT(){
    ll n; cin >> n;
    printString(n % 10);
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}