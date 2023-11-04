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
    int phy, chem, bio, earth; cin >> phy >> chem >> bio >> earth;
    int history, geo; cin >> history >> geo;

    cout << max(max(phy + chem + bio, phy + chem + earth), max(phy + bio + earth, chem + bio + earth)) + max(history, geo) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}