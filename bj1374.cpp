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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct Node{
    ll start, end;
};
struct sortLec{
    bool operator() (const Node& a, const Node& b) const {
        if (a.start != b.start) return a.start < b.start;
        return a.end < b.end;
    }
};
void INPUT(){
    int n; cin >> n;
    deque<Node> pq;
    for (int i=0; i<n; i++){
        ll num, start, end; cin >> num >> start >> end;
        Node tmp; tmp.start = start; tmp.end = end;
        pq.push_back(tmp);
    }
    sort(pq.begin(), pq.end(), sortLec());


    priority_queue<ll, vector<ll>, greater<ll> > lec;
    lec.push(pq.front().end); pq.pop_front();
    while (!pq.empty()){
        if (pq.front().start < lec.top()){
            lec.push(pq.front().end);
        }
        else{
            lec.pop();
            lec.push(pq.front().end);
        }
        pq.pop_front();
    }

    cout << lec.size() << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
    int n; cin >> n;
    vector<Node> lec;
    for (int i=0; i<n; i++){
        ll num, start, end; cin >> num >> start >> end;
        Node tmp; tmp.start = start; tmp.end = end;
        lec.push_back(tmp);
    }
    sort(lec.begin(), lec.end(), sortLec());

    vector<ll> ans;
    // for (int i=0; i<n; i++) ans.push_back(0);
    for (int i=0; i<lec.size(); i++) {
        bool flag = true;
        for (int j=0; j<ans.size(); j++){
            if (lec[i].start >= ans[j]){
                ans[j] = lec[i].end;
                flag = false;
                break;
            }
        }

        if (flag){
            ans.push_back(lec[i].end);
        }
    }

    int ret = 0;
    for (int i=0; i<n; i++){
        if (!ans[i]) break;
        ret++;
    }
    cout << ret << endl;
*/