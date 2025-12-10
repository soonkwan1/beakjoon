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
    
}
void SOLUTION(){
    while (1) {
        int n; cin >> n;
        if (!n)
        break;
        vector<int> v;
        v.push_back(n);
        n *= n;
        while (1) {
            string s = to_string(n);
            while (s.size() < 8)
                s = "0" + s;
            n = stoi(s.substr(2, 4));
            if (find(v.begin(), v.end(), n) != v.end())
                break;
            v.push_back(n);
            n *= n;
        }
    cout << v.size() << '\n';
  }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}