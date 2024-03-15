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
    int appeared[3000];
    fill_n(appeared, 3000, 0);

    vector<int> v;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (!appeared[tmp + 1000]){
            appeared[tmp + 1000] = 1;
            v.push_back(tmp);
        }
    }
    sort(v.begin(), v.end(), compMin());
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}