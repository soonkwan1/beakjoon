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
    vector<int> v;
    for (int i=n-1; i>=0; i--) v.push_back(i);
    for (int i=1; i<n; i++) v.push_back(i);

    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[i]; j++) cout << " ";
        for (int j=0; j<n-v[i]; j++) cout << "*";
        cout << endl;
    }
}

int main(){
    fastio;
    INPUT();
    return 0;
}