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

int getRidZero(string n){
    for (int i=0; i<n.size(); i++){
        if (int(n[i]) - 48 == 0){
            return i;
        }
    }
    return -1;
}
int sumString(string n){
    int tmp = 0;
    for (int i=0; i<n.size(); i++){
        tmp += int(n[i]) - 48;
    }
    if (tmp % 3 == 0) return 1;
    return -1;
}
struct compMax{
    bool operator() (const char& a, const char& b) const{
        return a > b;
    }
};
void INPUT(){
    string n; cin >> n;
    int res = getRidZero(n), flag = sumString(n);

    if (res == -1 || flag == -1) cout << -1 << endl;
    else{
        sort(n.begin(), n.end(), compMax());
        int fl = 0;
        for (int i=0; i<n.size(); i++){
            if (fl == 0 && int(n[i]) - 48 == 0){
                fl = 1;
                continue;
            }
            cout << n[i];
        }
        cout << "0" << endl;
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