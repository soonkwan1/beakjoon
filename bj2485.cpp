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

int n;
vector<int> v;
int gcd(int a, int b){
    if (a < b) swap(a, b);
    while (b != 0){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
}
void SOLUTION(){
    int gap = v[1] - v[0];
    for (int i=2; i<n; i++){
        gap = gcd(gap, v[i] - v[i-1]);
    }
    cout << (v[n-1] - v[0]) / gap + 1 - n << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}