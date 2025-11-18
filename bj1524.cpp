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
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;

        priority_queue<int, vector<int>, greater<int> > sj;
        priority_queue<int, vector<int>, greater<int> > sb;
        
        for (int i=0; i<n; i++){
            int tmp; cin >> tmp;
            sj.push(tmp);
        }
        for (int i=0; i<m; i++){
            int tmp; cin >> tmp;
            sb.push(tmp);
        }

        while (!sj.empty() && !sb.empty()){
            if (sj.top() < sb.top()) sj.pop();
            else sb.pop();
        }

        if (sj.empty()) cout << "B" << endl;
        else if (sb.empty()) cout << "S" << endl;
        else cout << "C" << endl;
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