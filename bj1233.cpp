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
    int s1, s2, s3; cin >> s1 >> s2 >> s3;
    int ans = -1;
    unordered_map<int, int> um;
    for (int i=1; i<=s1; i++){
        for (int j=1; j<=s2; j++){
            for (int k=1; k<=s3; k++){
                int tmp = i + j + k;
                um[tmp]++;
                ans = max(ans, um[tmp]);
            }
        }
    }
    
    for (int i=1; i<=s1+s2+s3; i++){
        if (um[i] == ans) {
            cout << i << endl;
            break;
        }
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}