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
    int n, k; cin >> n >> k;
    vector<int> v(5);
    
    for (int i=0; i<n; i++){
        int sex, grade; cin >> sex >> grade;
        if (grade == 1 || grade == 2){
            v[0]++;
        }
        else if (grade == 3 || grade == 4){
            if (sex == 0) v[1]++;
            else v[2]++;
        }
        else if (grade == 5 || grade == 6){
            if (sex == 0) v[3]++;
            else v[4]++;
        }
    }

    int ans = 0;
    for (int i=0; i<5; i++){
        if (v[i] % k == 0) ans += v[i] / k;
        else ans += v[i] / k + 1;
    }
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