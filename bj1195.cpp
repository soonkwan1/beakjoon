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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    string gear1, gear2; cin >> gear1 >> gear2;
    if (gear1.size() > gear2.size()) swap(gear1, gear2);
    int total_length = gear2.size() + gear1.size();

    for (int i=0; i<gear1.size(); i++) gear2 = "1" + gear2 + "1";

    int ans = total_length;
    for (int i=1; i<gear1.size() + gear2.size(); i++){
        bool attach = true;
        int cnt = 0;    
        for (int j=0; j<gear1.size(); j++){
            if (gear1[j] == '2' && gear2[i + j] == '2'){
                attach = false;
                break;
            }
            else if (i + j >= gear1.size() && i + j < total_length){
                cnt++;
            }
        }
        // cout << cnt << endl;
        if (attach) ans = min(ans, total_length - cnt);
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}