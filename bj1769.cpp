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
int shortenString(string num, int& cnt){
    if (num.size() == 1){
        return stoi(num) % 3 == 0 ? 1 : 0;
    }
    else{
        int tmp = 0;
        cnt++;
        for (int i=0; i<num.size(); i++){
            tmp += int(num[i]) - 48;
        }
        return shortenString(to_string(tmp), cnt);
    }
}
void INPUT(){
    string num; cin >> num;
    int cnt = 0;
    int ans = shortenString(num, cnt);
    
    cout << cnt << endl;
    ans == 1 ? cout << "YES" << endl : cout << "NO" << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}