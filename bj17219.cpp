#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <map>
#include <queue>
using namespace std;

void INIT(){ 
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    int n, m;
    cin >> n >> m;
    map<string, string> mp;

    string site, pw;
    for (int i=0; i<n; i++){
        cin >> site >> pw;
        mp[site] = pw;
    }

    for (int i=0; i<m; i++){
        cin >> site;
        cout << mp[site] << "\n";
    }

}

int main(){
    INIT();
    INPUT();
    return 0;
}