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
    int n1, n2; cin >> n1 >> n2;
    int chicken; cin >> chicken;
    int total = n1 + n2;
    chicken *= 2;

    if (total >= chicken) cout << total - chicken << endl;
    else cout << total << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}