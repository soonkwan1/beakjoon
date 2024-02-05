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

int l, c;
vector<char> cv;
struct compMin{
    bool operator() (const char& a, const char& b) const{
        return a < b;
    }
};
void INPUT(){
    cin >> l >> c;
    for (int i=0; i<c; i++){
        char tmp; cin >> tmp;
        cv.push_back(tmp);
    }
    sort(cv.begin(), cv.end(), compMin());
}
bool checkPW(vector<char> pw){
    int t1 = 0, t2 = 0;
    for (int i=0; i<pw.size(); i++){
        if (pw[i] == 'a' || pw[i] == 'e' || pw[i] == 'i' || pw[i] == 'o' || pw[i] == 'u'){
            t1++;
        }
        else t2++;
    }

    if (t1 == 0) return true;
    if (t2 < 2) return true;
    return false;
}
void dfs(int idx, vector<char> pw){
    if (pw.size() == l){
        if (checkPW(pw)) return;
        for (int i=0; i<pw.size(); i++) cout << pw[i];
        cout << endl;
        return;
    }

    for (int i=idx; i<cv.size(); i++){
        pw.push_back(cv[i]);
        dfs(i+1, pw);
        pw.pop_back();
    }
}
void Solution(){
    vector<char> pw;
    dfs(0, pw);
}
int main(){
    fastio;
    INPUT();
    Solution();
    return 0;
}