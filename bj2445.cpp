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
    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++) cout << "*";
        for (int j=n-i; j>0; j--) cout<< " ";
        for (int j=n-i; j>0; j--) cout<< " ";
        for (int j=0; j<i; j++) cout << "*";
        cout << endl;
    }
    for (int i=n-1; i>0; i--){
        for (int j=0; j<i; j++) cout << "*";        
        for (int j=0; j<n-i; j++) cout << " ";
        for (int j=0; j<n-i; j++) cout << " ";
        for (int j=0; j<i; j++) cout << "*";
        cout << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}