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
    int n, m; cin >> n >> m;
    int* num_list = new int[n];

    for (int i=0; i<n; i++){
        cin >> num_list[i];
    }

    ll ans = 0;
    for (int k=1; k<=n; k++){
        ll s = 0;
        for (int i=0; i<k; i++){
            s += num_list[i];
        }

        int start = 0, end = k-1;
        while (true){
            if (s % m == 0) ans++;
            
            end++;
            if (end == n) break;
            s -= num_list[start]; 
            start++;
            s += num_list[end];
        }
    }
    cout << ans << endl;

    delete[] num_list;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}

/*

*/