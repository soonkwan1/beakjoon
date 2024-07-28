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

void printGaro(int k){
    for (int i=0; i<k; i++){
        for (int j=0; j<k*5; j++){
            cout << "@";
        }
        cout << endl;
    }
}
void printSero(int k){
    for (int i=0; i<k*3; i++){
        for (int j=0; j<k; j++){
            cout << "@";
        }
        cout << endl;
    }
}
void INPUT(){
    int n; cin >> n;
    printGaro(n);
    printSero(n);
    printGaro(n);
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}