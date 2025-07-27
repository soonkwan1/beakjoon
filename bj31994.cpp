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
    string ans_s;
    int ans_n = -1;

    for (int i=0; i<7; i++){
        string name; int n;
        cin >> name >> n;
        if (n > ans_n){
            ans_n = n;
            ans_s = name;
        }
    }

    cout << ans_s << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}