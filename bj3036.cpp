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


int gcd(int a, int b){
    if (a < b) swap(a,b);
    while(b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void INPUT(){
    int n; cin >> n;
    int first; cin >> first;
    for (int i=1; i<n; i++){
        int tmp; cin >> tmp;
        int gcc = gcd(first, tmp);
        cout << first / gcc << "/" << tmp / gcc << endl;
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