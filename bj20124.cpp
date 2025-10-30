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
    bool operator() (const pair<string, int>& a, const pair<string, int>& b) const{
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    }
};
void INPUT(){
    int n; cin >> n;
    vector<pair<string, int> > v;
    for (int i=0; i<n; i++){
        string name; int score;
        cin >> name >> score;
        v.push_back(make_pair(name, score));
    }
    sort(v.begin(), v.end(), compMax());
    cout << v[0].first << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}