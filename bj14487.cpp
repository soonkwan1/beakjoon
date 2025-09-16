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
    int n; cin >> n;
    int total = 0;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
        total += v[i];
    }
    sort(v.begin(), v.end(), compMax());
    cout << total - v[0] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}