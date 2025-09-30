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

string binaryAdd(string a, string b){
    int k = b.size();
    for (int i=0; i<a.size() - k; i++){
        b = "0" + b;
    }

    string ret = "";
    int addon = 0;
    for (int i=a.size() - 1; i>=0; i--){
        int t1 = int(a[i]) - 48;
        int t2 = int(b[i]) - 48;
        int tmp = t1 + t2 + addon;
        if (tmp == 0){
            addon = 0;
            ret = "0" + ret;
        }
        else if (tmp == 1){
            addon = 0;
            ret = "1" + ret;
        }
        else if (tmp == 2){
            addon = 1;
            ret = "0" + ret;
        }
        else if (tmp == 3){
            addon = 1;
            ret = "1" + ret;
        }
    }
    if (addon) ret = "1" + ret;
    return ret;
}

void INPUT(){
    string num; cin >> num;
    string num2 = num + "0000";
    cout << binaryAdd(num2, num) << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}