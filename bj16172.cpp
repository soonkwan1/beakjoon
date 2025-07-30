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
    string a, b; cin >> a >> b;
    vector<char> v;
    string tmp;
    for (int i=0; i<a.size(); i++){
        if (a[i] >= '0' && a[i] <= '9') continue;
        // v.push_back(a[i]);
        tmp.push_back(a[i]);
    }

    cout << (tmp.find(b) != string::npos) << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}