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
void INPUT(){
    vector<int> package;
    vector<int> ea;

    int n, m; cin >> n >> m;
    for (int i=0; i<m; i++){
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        package.push_back(tmp1);
        ea.push_back(tmp2);
    }

    sort(package.begin(), package.end(), compMin());
    sort(ea.begin(), ea.end(), compMin());

    int tmp1, tmp2, tmp3;
    tmp1 = n % 6 == 0 ? package[0] * (n / 6) : package[0] * (n / 6 + 1);
    tmp2 = package[0] * (n / 6) + ea[0] * (n % 6);
    tmp3 = ea[0] * n;
    
    cout << min(tmp1, min(tmp2, tmp3)) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}