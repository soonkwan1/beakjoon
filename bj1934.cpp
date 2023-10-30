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
int euclid(int a, int b){
    while (b != 0){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        cout << a * b / euclid(a, b) << endl;

    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}