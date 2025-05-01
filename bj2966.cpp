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
    bool operator() (const pair<int,string>& a, const pair<int,string>& b) const{
        if (a.first != b.first) return a.first > b.first;
        return a.second < b.second;
    }
};

void INPUT(){
    int n; cin >> n;
    string line; cin >> line;
    int adrian = 0; int bruno = 0; int goran = 0;
    deque<char> ad_ans;
    deque<char> br_ans;
    deque<char> go_ans;
    ad_ans.push_back('A'); ad_ans.push_back('B'); ad_ans.push_back('C');
    
    br_ans.push_back('B');br_ans.push_back('A');
    br_ans.push_back('B');br_ans.push_back('C');

    go_ans.push_back('C');go_ans.push_back('C');
    go_ans.push_back('A');go_ans.push_back('A');
    go_ans.push_back('B');go_ans.push_back('B');
    

    for (int i=0; i<line.size(); i++){
        char ad_tmp = ad_ans.front(); ad_ans.pop_front();
        char br_tmp = br_ans.front(); br_ans.pop_front();
        char go_tmp = go_ans.front(); go_ans.pop_front();

        ad_ans.push_back(ad_tmp);
        br_ans.push_back(br_tmp);
        go_ans.push_back(go_tmp);

        if (line[i] == ad_tmp) adrian++;
        if (line[i] == br_tmp) bruno++;
        if (line[i] == go_tmp) goran++;
    }

    vector<pair<int, string> > v;
    v.push_back(make_pair(adrian, "Adrian"));
    v.push_back(make_pair(bruno, "Bruno"));
    v.push_back(make_pair(goran, "Goran"));

    sort(v.begin(), v.end(), compMax());

    int start = v[0].first;
    cout << start << endl;
    cout << v[0].second << endl;
    for (int i=1; i<v.size(); i++){
        if (v[i].first < start) break;
        cout << v[i].second << endl;
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