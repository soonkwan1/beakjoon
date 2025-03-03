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

struct compMin{
    bool operator() (pair<string, int>& a, pair<string, int>& b) {
        if (a.second != b.second) return a.second > b.second;
        if (a.first.size() != b.first.size()) return a.first.size() > b.first.size();
        return a.first < b.first;
    }
};
void INPUT(){
    int n, m; cin >> n >> m;
    unordered_map<string, int> um;
    vector<string> word_list;
    for (int i=0; i<n; i++){
        string word; cin >> word;
        if (word.size() < m) continue;
        
        if (!um[word]){
            um[word] = 1;
            word_list.push_back(word);
        }
        else{
            um[word]++;
        }
    }

    vector<pair<string, int> > v;
    for (int i=0; i<word_list.size(); i++){
        v.push_back(make_pair(word_list[i], um[word_list[i]]));
    }
    sort(v.begin(), v.end(), compMin());
    for (int i=0; i<v.size(); i++){
        cout << v[i].first << endl;
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