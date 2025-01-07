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

void getReverse(vector<int>& v, int a, int b){
    while (a < b){
        int tmp = v[b];
        v[b] = v[a];
        v[a] = tmp;
        a++; b--;
    }
}
void INPUT(){
    vector<int> v(21);
    for (int i=0; i<21; i++){
        v[i] = i;
    }

    for (int i=0; i<10; i++){
        int a, b; cin >> a >> b;
        getReverse(v, a, b);
    }

    for (int i=1; i<21; i++) cout << v[i] << " ";
    cout << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}