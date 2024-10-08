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

void printV(vector<int> v, int s){
    for (int i=1; i<=s; i++){
        cout << v[i] << " ";
        if (i % 20 == 0) cout << endl;
    }
}
void INPUT(){
    int s; cin >> s;
    vector<int> v(s+1);
    for (int i=1; i<=s; i++) cin >> v[i];

    int n; cin >> n;
    while (n--){
        int gender, num; cin >> gender >> num;
        // 남자면 배수 모두 스위치 변환
        if (gender == 1){
            for (int i=num; i<=s; i+=num){
                if (v[i] == 1) v[i] = 0;
                else v[i] = 1;
            }
        }
        // 여자면 대칭 변환
        else{
            if (v[num]) v[num] = 0;
            else v[num] = 1;
            
            int left = num - 1;
            int right = num + 1;
            while (left >= 1 && right <= s){
                if (v[left] != v[right]) break;
                if (v[left]){
                    v[left] = 0; v[right] = 0;
                }
                else{
                    v[left] = 1; v[right] = 1;
                }
                left--; right ++;
            }
        }
    }
    printV(v, s);
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}