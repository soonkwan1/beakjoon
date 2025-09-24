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

string removeZero(string a){
    int state = 1;
    string ret = "";
    for (int i=0; i<a.size(); i++){
        if (state && a[i] == '0') continue;
        else{
            state = 0;
            ret = ret + a[i];
        }
    }
    return ret;
}

void INPUT(){
    string a, b; cin >> a >> b;
    a = removeZero(a); b = removeZero(b);
    if (a.size() > b.size()){
        int k = a.size() - b.size();
        for (int i=0; i<k; i++) b = '0' + b;
    }
    else if (b.size() > a.size()){
        int k = b.size() - a.size();
        for (int i=0; i<k; i++) a = '0' + a;
    }
    
    int addon = 0;
    string ans = "";
    for (int i=a.size() - 1; i >= 0; i--){
        if (addon){
            if (a[i] == '1' && b[i] == '1'){
                ans = '1' + ans;
                addon = 1;
            }
            else if (a[i] == '1' && b[i] == '0'){
                ans = '0' + ans;
                addon = 1;
            }
            else if (a[i] == '0' && b[i] == '1'){
                ans = '0' + ans;
                addon = 1;
            }
            else if (a[i] == '0' && b[i] == '0'){
                ans = '1' + ans;
                addon = 0;
            }
        }
        else {
            if (a[i] == '1' && b[i] == '1'){
                ans = '0' + ans;
                addon = 1;
            }
            else if (a[i] == '1' && b[i] == '0'){
                ans = '1' + ans;
                addon = 0;
            }
            else if (a[i] == '0' && b[i] == '1'){
                ans = '1' + ans;
                addon = 0;
            }
            else if (a[i] == '0' && b[i] == '0'){
                ans = '0' + ans;
                addon = 0;
            }
        }
    }
    
    if (ans.size() == 0) {
        cout << '0' <<endl;
        return;
    }

    if (addon) cout << '1';
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}