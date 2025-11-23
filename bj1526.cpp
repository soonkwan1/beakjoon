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

struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};

void INPUT(){
    int n; cin >> n;
    vector<int> v;
    v.push_back(4); v.push_back(7);

    int cnt = 1;
    for (int i=0; i<64;){
        int c = pow(10, cnt);
        for (int j=0; j<pow(2, cnt); j++){
            v.push_back(v[i + j] + 4 * c);
            v.push_back(v[i + j] + 7 * c);
        }
        i += pow(2, cnt);
        cnt++;
    }

    sort(v.begin(), v.end(), compMin());
    for (int i=0; i<v.size(); i++){
        if (n < v[i]){
            cout << v[i-1] << endl;
            break;
        }
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}