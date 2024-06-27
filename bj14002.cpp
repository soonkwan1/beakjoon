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

void INPUT(){
    int n; cin >> n;
    int* nl = new int[n];
    for (int i=0; i<n; i++) cin >> nl[i];

    vector<int> v; 
    v.push_back(nl[0]);

    for (int i=1; i<n; i++){
        if (nl[i] > v.back()) v.push_back(nl[i]);
        else{
            for (int j=0; j<v.size(); j++) {
                if (nl[i] < v[j]) v[j] = nl[i];
            }
        }
    }

    cout << v.size() << endl;
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;


    delete[] nl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}