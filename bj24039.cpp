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

    int eratos[111]; fill_n(eratos, 111, 1);
    vector<int> prime_num;
    eratos[0] = 0; eratos[1] = 0;
    for (int i=2; i<111; i++){
        if (eratos[i]){
            prime_num.push_back(i);
            for (int j=i*2; j<111; j+=i) eratos[j] = 0;
        }
    }
    
    vector<int> v;
    for (int i=0; i<prime_num.size() - 1; i++){
        v.push_back(prime_num[i] * prime_num[i+1]);
    }

    // sort(v.begin(), v.end(), compMin());

    for (int i=0; i<v.size(); i++){
        if (v[i] > n) {
            cout << v[i] << endl;
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