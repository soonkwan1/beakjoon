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
    int n; cin >> n;
    int prev; cin >> prev;

    int ans = 0;
    int cnt = 1;
    int state = 1;
    int same_die = 0;
    for (int i=1; i<n; i++){
        int curr; cin >> curr;

        // 앞과 뒤가 같다면, cnt 증가 및 same_die 증가
        if (prev == curr) {
            same_die++;
        }
        // 증가하고 있는 상태
        else if (state == 1){
            // 더 큰 숫자가 들어왔다면
            if (curr > prev){ 
                cnt++;
                cnt += same_die;
                same_die = 0;
            }
            // 더 작은 숫자가 들어온다면
            else{
                // 감소하는 상태로 변환
                state = 2;
                ans = max(ans, cnt + same_die);
                cnt = same_die + 2;
                same_die = 0;
            }
        }
        // 감소하고 있는 상태
        else if (state == 2){
            // 더 작은 숫자가 들어왔다면
            if (curr < prev){
                cnt++;
                cnt += same_die;
                same_die = 0;
            }
            // 더 큰 숫자가 들어온다면
            else{
                // 증가하는 상태로 변환
                state = 1;
                ans = max(ans, cnt + same_die);
                cnt = same_die + 2;
                same_die = 0;
            }
        }
        // cout << "State : " << state << ", cnt : " << cnt << ", same_die : " << same_die << endl;
        prev = curr;
    }
    ans = max(ans, cnt + same_die);
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