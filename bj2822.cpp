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
    bool operator() (const pair<int,int>& a, const pair<int,int>& b){
        return a.second > b.second;
    }
};
struct compMin{
    bool operator() (const pair<int,int>& a, const pair<int,int>& b){
        return a.first < b.first;
    }
};

void INPUT(){
    int n = 8;
    vector<pair<int,int> > v;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(make_pair(i+1, tmp));
    }
    sort(v.begin(), v.end(), compMax());

    int total = 0;
    vector<pair<int,int> > result;
    for (int i=0; i<5; i++){
        total += v[i].second;
        result.push_back(v[i]);
    }
    cout << total << endl;

    sort(result.begin(), result.end(), compMin());
    for (int i=0; i<5; i++){
        cout << result[i].first << " ";
    }
    cout << endl;
    
}

int main(){
    fastio;
    INPUT();
    return 0;
}