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

int sumInteger(string a){
    int ret = 0;
    for (int i=0; i<a.size(); i++){
        int tmp = int(a[i]) - 48;
        if (tmp <= 0 || tmp >= 10) continue;
        ret += tmp;
    }
    return ret;
}
struct compSort{
    bool operator() (const string& a, const string& b) const{
        if (a.size() != b.size()) return a.size() < b.size();
        int tmp1 = sumInteger(a); int tmp2 = sumInteger(b);
        if (tmp1 != tmp2) return tmp1 < tmp2;
        return a < b;
    }
};
void INPUT(){
    int n; cin >> n;
    vector<string> v;
    for (int i=0; i<n; i++){
        string tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compSort());
    for (int i=0; i<v.size(); i++){
        cout << v[i] << endl;
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