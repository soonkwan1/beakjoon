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
    
    int start, end, sum;
    start = 1, end = 2;
    sum = start + end;

    int ans = 1;
    while (start <= n / 2){
        if (sum == n) {
            ans++;
            // for (int i=start; i<=end; i++) cout << i << " ";
            // cout << endl;
        }
        
        if (sum < n){
            end++;
            sum += end;
        }
        else {
            sum -= start;
            start++;
        }
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}