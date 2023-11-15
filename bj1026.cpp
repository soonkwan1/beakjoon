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
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
struct compMax{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    int n; cin >> n;
    int* A = new int[n];
    int* B = new int[n];

    for (int i=0; i<n; i++) cin >> A[i];
    for (int i=0; i<n; i++) cin >> B[i];

    sort(A, A+n, compMax());
    sort(B, B+n, compMin());

    int ans = 0;
    for (int i=0; i<n; i++) ans += A[i] * B[i];
    cout << ans << endl;

    delete[] A; delete[] B;
}

int main(){
    INIT();
    INPUT();
    return 0;
}