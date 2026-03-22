#include <bits/stdc++.h>
using namespace std;

int main(){
    int u, l, a;
    cin >> u >> l;
    a = 60 + l;
    if(u <= a) cout << u * 1500;
    else cout << a * 1500 + (u - a) * 3000;
}
