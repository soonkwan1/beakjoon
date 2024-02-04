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

vector<int> pq;

void push(int c){
    pq.push_back(c);
    if (pq.size() == 2){
        return;
    }
    
    int idx = pq.size() - 1;
    int parent = 0, child = 0;
    while (idx >= 1){
        child = idx;
        parent = idx / 2;
        if (pq[child] < pq[parent]){
            swap(pq[child], pq[parent]);
            idx = parent;
        }
        else{
            break;
        }
    }
}

void INPUT(){
    int n; cin >> n;
    vector<int> ans;
    while (n--){
        int tmp; cin >> tmp;
        push(tmp);
        ans.push_back(pq[(pq.size() + 1) / 2 - 1]);
    }
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    
}

int main(){
    fastio;
    INPUT();
    return 0;
}