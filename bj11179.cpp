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
    int n; cin >> n;
    deque<int> v;
    while (n){
        v.push_front(n % 2);
        n /= 2;
    }

    int tmp = 0;
    int digit = 1;
    for (int i=0; i<v.size(); i++){
        tmp += v[i] * digit;
        digit *= 2;
    }
    cout << tmp << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}