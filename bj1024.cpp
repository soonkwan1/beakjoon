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
    vector<int> ans;
    int n, k; cin >> n >> k;
    for (int i=k; i<=100; i++){
        double a = (double)n / i - ((double)i - 1) / 2;
        if (a < 0) break;
        else if (a != (int)a) continue;

        int temp = 0;
        for (int j=a; j<a+i; j++){
            temp += j;
        }

        if (temp == n){
            for (int j=a; j<a+i; j++){
                cout << j << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}