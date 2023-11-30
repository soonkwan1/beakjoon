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
void INPUT(){
    int n; cin >> n;
    queue<int> q;
    for (int i=1; i<=n; i++){
        q.push(i);
    }

    vector<int> ans;
    for (int i = 0; i < n - 1; i++){
        ans.push_back(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    ans.push_back(q.front());
    
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}