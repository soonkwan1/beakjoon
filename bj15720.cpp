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
    priority_queue<int> burger;
    priority_queue<int> sidemenu;
    priority_queue<int> beverage;

    int b, c, d; cin >> b >> c >> d;
    int total = 0;
    for (int i=0; i<b; i++){
        int tmp; cin >> tmp;
        total += tmp;
        burger.push(tmp);
    }
    for (int i=0; i<c; i++){
        int tmp; cin >> tmp;
        total += tmp;
        sidemenu.push(tmp);
    }
    for (int i=0; i<d; i++){
        int tmp; cin >> tmp;
        total += tmp;
        beverage.push(tmp);
    }

    int ans = 0;
    while (!burger.empty() && !sidemenu.empty() && !beverage.empty()){
        ans += (burger.top() + sidemenu.top() + beverage.top()) * 0.9;
        burger.pop();
        sidemenu.pop();
        beverage.pop();
    }
    while (!burger.empty()){
        ans += burger.top();
        burger.pop();
    }
    while (!sidemenu.empty()){
        ans += sidemenu.top();
        sidemenu.pop();
    }
    while (!beverage.empty()){
        ans += beverage.top();
        beverage.pop();
    }

    cout << total << endl;
    cout << ans << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}