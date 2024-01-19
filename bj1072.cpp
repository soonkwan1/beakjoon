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
    double x, y; cin >> x >> y;
    
    int z = 100 * y / x;
    int left = 1, right = 1000000000;
    int ans = -1;
    while (left <= right){
        int mid = (left + right) / 2;
        int n_z = 100 * (y + mid) / (x + mid);
        if (n_z > z){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout << ans << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}

/*
1000000000 989999999
*/