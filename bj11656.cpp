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
    bool operator() (const string& a, const string& b) const{
        return a < b;
    }
};
void INPUT(){
    string word; cin >> word;
    vector<string> v;
    for (int i=0; i<word.size(); i++){
        string tmp = "";
        for (int j=i; j<word.size(); j++){
            tmp += word[j];
        }
        v.push_back(tmp);
    }

    //sort(v.begin(), v.end());
    sort(v.begin(), v.end(), compMin());
    for (int i=0; i<v.size(); i++) cout << v[i] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}