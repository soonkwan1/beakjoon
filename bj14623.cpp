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

string addBinary(string a, string b){
    if (b.size() > a.size()) swap(a, b);

    for (int i=0; i<a.size() - b.size(); i++){
        b = '0' + b;
    }

    string ret = "";

    int addon = 0;
    for (int i=a.size()-1; i>=0; i--){
        if (a[i] == '1' && b[i] == '1' && addon){
            ret = '1' + ret;
            addon = 1;
        }
        else if (a[i] == '1' && b[i] == '1' && !addon){
            ret = '0' + ret;
            addon = 1;
        }
        else if (a[i] == '0' && b[i] == '1' && addon){
            ret = '0' + ret;
            addon = 1;
        }
        else if (a[i] == '0' && b[i] == '1' && !addon){
            ret = '1' + ret;
            addon = 0;
        }
        else if (a[i] == '1' && b[i] == '0' && addon){
            ret = '0' + ret;
            addon = 1;
        }
        else if (a[i] == '1' && b[i] == '0' && !addon){
            ret = '1' + ret;
            addon = 0;
        }
        else if (a[i] == '0' && b[i] == '0' && addon){
            ret = '1' + ret;
            addon = 0;
        }
        else if (a[i] == '0' && b[i] == '0' && !addon){
            ret = '0' + ret;
            addon = 0;
        }
    }

    return ret;
}
void INPUT(){
    string a, b; cin >> a >> b;
    vector<string> v;
    int cnt = 0;
    for (int i=b.size()-1; i>=0; i--){
        string tmp = "";
        for (int j=a.size()-1; j>=0; j--){
            if (b[i] == '1' && a[j] == '1') tmp = '1' + tmp;
            else tmp = '0' + tmp;
        }

        for (int j=0; j<cnt; j++){
            tmp += '0';
        }
        cnt++;
        v.push_back(tmp);
    }

    string ans = v[0];
    for (int i=1; i<v.size(); i++){
        ans = addBinary(ans, v[i]);
    }
    
    int state = 0;
    for (int i=0; i<ans.size(); i++){
        if (!state && ans[i] == '0') continue;
        else{
            state = 1;
            cout << ans[i];
        }
    }
    cout << endl;
}
void SOLUTION(){
    string a, b; cin >> a >> b;
    ll ia = 0; ll ib = 0;

    int digit = 1;
    for (int i=a.size()-1; i>=0; i--){
        if (a[i] == '1'){
            ia += digit;
        }
        digit *= 2;
    }

    digit = 1;
    for (int i=b.size()-1; i>=0; i--){
        if (b[i] == '1'){
            ib += digit;
        }
        digit *= 2;
    }

    ll ic = ia * ib;

    vector<int> v;
    while (ic != 0){
        if (ic % 2 == 1){
            v.push_back(1);
        }
        else if (ic % 2 == 0){
            v.push_back(0);
        }
        ic /= 2;
    }

    for (int i=v.size()-1; i>=0; i--){
        cout << v[i];
    }
    cout << endl;
}
int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}