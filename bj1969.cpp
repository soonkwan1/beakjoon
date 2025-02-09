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

int hammingDistance(string a, string b){
    int ret = 0;
    for (int i=0; i<a.size(); i++){
        if (a[i] != b[i]) ret++;
    }
    return ret;
}
void INPUT(){
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int table[1000][1000];
    for (int i=0; i<1000; i++){
        fill_n(table[i], 1000, -1);
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (table[i][j] == -1){
                int tmp = hammingDistance(v[i], v[j]);
                table[i][j] = tmp;
                table[j][i] = tmp;
            }
        }
    }

    int ans = 10000000000;
    vector<int> ham_list;
    for (int i=0; i<n; i++){
        int tmp = 0;
        for (int j=0; j<n; j++){
            cout << table[i][j] << " ";
            tmp += table[i][j];
        }
        cout << endl;
        ham_list.push_back(tmp);
        ans = min(ans, tmp);
    }

    vector<string> ans_list;
    for (int i=0; i<ham_list.size(); i++){
        if (ham_list[i] == ans) ans_list.push_back(v[i]);
    }

    sort(ans_list.begin(), ans_list.end());

    cout << ans_list.front() << endl;
    cout << ans << endl;
}
struct compPair{
    bool operator() (const pair<char, int>& a, pair<char, int>& b) const{
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    }
};
void SOLUTION(){
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    // A C G T
    int ans = 0;
    string s_ans = "";
    for (int i=0; i<m; i++){
        unordered_map<char, int> um;
        for (int j=0; j<n; j++){
            um[v[j][i]]++;
        }
        // cout << um['A'] << " " << um['C'] << " " << um['G'] << " " << um['T'] << endl;
        vector<pair<char, int> > v;
        v.push_back(make_pair('A', um['A']));
        v.push_back(make_pair('C', um['C']));
        v.push_back(make_pair('G', um['G']));
        v.push_back(make_pair('T', um['T']));

        sort(v.begin(), v.end(), compPair());
        s_ans += v[0].first;
        ans += v[1].second + v[2].second + v[3].second;
    }
    cout << s_ans << endl;
    cout << ans << endl;
}
int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}