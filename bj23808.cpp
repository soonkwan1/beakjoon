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
    for (int i=0; i<2*n; i++){
        for (int j=0; j<n; j++) cout << "@";
        for (int j=0; j<3*n; j++) cout << " ";
        for (int j=0; j<n; j++) cout << "@";
        cout << endl;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<5*n; j++) cout << "@";
        cout << endl;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) cout << "@";
        for (int j=0; j<3*n; j++) cout << " ";
        for (int j=0; j<n; j++) cout << "@";
        cout << endl;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<5*n; j++) cout << "@";
        cout << endl;
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