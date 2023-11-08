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
    string n1, n2; cin >> n1 >> n2;
    if (n1.size() != n2.size()) cout << 0 << endl;
    else{
        int ans = 0;
        for (int i=0; i<n1.size(); i++){
            if (n1[i] != n2[i]) break;
            if (n1[i] == n2[i] && n1[i] == '8') ans++;
        }
        cout << ans << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}